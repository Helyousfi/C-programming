@echo off
REM This batch file deletes .obj and .pdb files in a C++ projects folder.

REM Set the path to your C++ projects folder
cd "path\to\your\cpp\projects\folder"

REM Delete .obj files
del *.obj /s /q

REM Delete .pdb files
del *.pdb /s /q

REM Delete .exe files
del *.exe /s /q

REM Display a message indicating that deletion is complete
echo Deletion of .obj and .pdb files complete.

REM Optional: Pause to keep the Command Prompt window open for review
pause
