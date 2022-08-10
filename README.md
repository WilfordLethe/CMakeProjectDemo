# CMake Project Demo

## System requirement
- [CMake](https://cmake.org/)
- [Make](https://www.gnu.org/software/make/) `or` [Ninja](https://ninja-build.org/)
- [VSCode](https://code.visualstudio.com/)
- Plugin for VSCode:[CMake](https://marketplace.visualstudio.com/items?itemName=twxs.cmake)

## Multi-Files_Floders
- Directory Structure
```
CMakeProiectDemo
├─CMakeLists.txt
├─main.c
└─math_lib
    ├─mathlib.c
    └─mathlib.h
```

## Cmake 可用变量
|Variable|Info|
|:-:|:-:|
|CMAKE_SOURCE_DIR|根源代码目录，工程顶层目录。暂认为就是PROJECT_SOURCE_DIR|
|CMAKE_CURRENT_SOURCE_DIR|当前处理的 CMakeLists.txt 所在的路径|
|PROJECT_SOURCE_DIR|工程顶层目录|
|CMAKE_BINARY_DIR|运行cmake的目录(外部构建时就是build目录)|
|CMAKE_CURRENT_BINARY_DIR|The build directory you are currently in.当前所在build目录|
|PROJECT_BINARY_DIR|暂认为就是CMAKE_BINARY_DIR|
