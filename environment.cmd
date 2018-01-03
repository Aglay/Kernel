@echo off
if not defined TOOLS (
    if exist "C:\Flame\Flame" (
        set TOOLS=C:\Flame\Flame
    ) else (
        set TOOLS=C:\Flame
    )
)
if not defined ARCH set ARCH=i386
color 0A
set CURRENT=%cd%
set PATH=%TOOLS%;%TOOLS%\bin;%TOOLS%\i386;%TOOLS%\i386\bin;%CURRENT%;%PATH%
set C_INCLUDE_PATH=
set CPLUS_INCLUDE_PATH=
set LIBRARY_PATH=
if "%ARCH%"=="amd64" (
    set PATH=%TOOLS%;%TOOLS%\bin;%TOOLS%\amd64;%TOOLS%\amd64\bin;%CURRENT%;%PATH%
    if not exist "output-MinGW-amd64" (
        call "configure.cmd"
        cmd /c "exit /b 0"
    )
    cd output-MinGW-amd64
) else (
    set PATH=%TOOLS%;%TOOLS%\bin;%TOOLS%\i386;%TOOLS%\i386\bin;%CURRENT%;%PATH%
if not exist "output-MinGW-i386" (
    call "configure.cmd"
    cmd /c "exit /b 0"
)
cd output-MinGW-i386
)
