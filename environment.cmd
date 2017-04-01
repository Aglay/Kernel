if not defined TOOLS set TOOLS=C:\Flame

color 0A
set CURRENT=%cd%
set PATH=%TOOLS%;%TOOLS%\bin;%TOOLS%\i386;%TOOLS%\i386\bin;%CURRENT%;%PATH%
set C_INCLUDE_PATH=
set CPLUS_INCLUDE_PATH=
set LIBRARY_PATH=
set GOS_ARCH=i386
if not exist "output-MinGW-i386" (
    call "configure.cmd"
)
cd output-MinGW-i386
