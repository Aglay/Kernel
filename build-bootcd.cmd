@echo off
call "environment.cmd"
echo Building Greentea...
ninja bootcd
cd ..
pause
