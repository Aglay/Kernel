@echo off

REM This is needed so as to avoid static expansion of environment variables inside if (...) conditionals.
REM See http://stackoverflow.com/questions/305605/weird-scope-issue-in-bat-file
setlocal enabledelayedexpansion

if /I "%1" == "/?" (
:help
    echo Syntax: path\to\source\configure.cmd [script-options] [Cmake-options]
    echo Cmake-options: -DVARIABLE:TYPE=VALUE
    endlocal
    exit /b
)

REM Get the source root directory
set REACTOS_SOURCE_DIR=%~dp0
set CMAKE_GENERATOR="Ninja"
set CMAKE_GENERATOR_HOST=!CMAKE_GENERATOR!

REM Detect presence of cmake
cmd /c cmake --version 2>&1 | find "cmake version" > NUL || goto cmake_notfound

if defined ARCH (
    echo Detected MinGW for %ARCH%
    set BUILD_ENVIRONMENT=MinGW
    set MINGW_TOOCHAIN_FILE=toolchain-gcc.cmake
) else (
    echo Error: Unable to detect build environment. Configure script failure.
    endlocal
    exit /b
)

set NEW_STYLE_BUILD=1

REM Parse command line parameters
:repeat
    if /I "%1%" == "-DNEW_STYLE_BUILD" (
        set NEW_STYLE_BUILD=%2
    ) else if "%BUILD_ENVIRONMENT%" == "MinGW" (
        if /I "%1" == "Codeblocks" (
            set CMAKE_GENERATOR="CodeBlocks - MinGW Makefiles"
        ) else if /I "%1" == "Makefiles" (
            set CMAKE_GENERATOR="MinGW Makefiles"
        ) else (
            goto continue
        )
    ) else (
        if /I "%1" == "CodeBlocks" (
            set CMAKE_GENERATOR="CodeBlocks - NMake Makefiles"
        ) else if /I "%1" == "Makefiles" (
            set CMAKE_GENERATOR="NMake Makefiles"
        ) else if /I "%1" == "RTC" (
            echo Runtime checks enabled
            set VS_RUNTIME_CHECKS=1
        ) else (
            goto continue
        )
    )

    SHIFT
    goto repeat
:continue

REM Create directories
set REACTOS_OUTPUT_PATH=output-%BUILD_ENVIRONMENT%-%ARCH%
if "%REACTOS_SOURCE_DIR%" == "%CD%\" (
    echo Creating directories in %REACTOS_OUTPUT_PATH%

    if not exist %REACTOS_OUTPUT_PATH% (
        mkdir %REACTOS_OUTPUT_PATH%
    )
    cd %REACTOS_OUTPUT_PATH%
)

if "%NEW_STYLE_BUILD%"=="0" (

    if not exist host-tools (
        mkdir host-tools
    )

    if not exist reactos (
        mkdir reactos
    )

    echo Preparing host tools...
    cd host-tools
    if EXIST CMakeCache.txt (
        del CMakeCache.txt /q
    )

    set REACTOS_BUILD_TOOLS_DIR=!CD!
    cmake -G %CMAKE_GENERATOR% -DARCH:STRING=%ARCH% "%REACTOS_SOURCE_DIR%"
    cd..
)

echo Preparing...

if "%NEW_STYLE_BUILD%"=="0" (
    cd reactos
)

if EXIST CMakeCache.txt (
    del CMakeCache.txt /q
    del host-tools\CMakeCache.txt /q
)

if "%NEW_STYLE_BUILD%"=="0" (
    set BUILD_TOOLS_FLAG=-DREACTOS_BUILD_TOOLS_DIR:PATH="%REACTOS_BUILD_TOOLS_DIR%"
)

cmake -G %CMAKE_GENERATOR% -DENABLE_CCACHE:BOOL=0 -DCMAKE_TOOLCHAIN_FILE:FILEPATH=%MINGW_TOOCHAIN_FILE% -DARCH:STRING=%ARCH% %BUILD_TOOLS_FLAG% %* "%REACTOS_SOURCE_DIR%"

if "%NEW_STYLE_BUILD%"=="0" (
    cd..
)

echo Configure script complete. Execute appropriate build commands.
endlocal
exit /b 0

:cmake_notfound
echo Unable to find cmake, if it is installed, check your PATH variable.
endlocal
exit /b
