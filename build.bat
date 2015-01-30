@echo off

call "c:\Program Files\Microsoft Visual Studio 12.0\VC\vcvarsall.bat"
mkdir build
pushd build
::cl /Zi ..\Main.cpp
popd