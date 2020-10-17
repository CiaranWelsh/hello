cmake_minimum_required(VERSION 3.14..3.18)
project(hello)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_library(MathLibrary STATIC "${CMAKE_CURRENT_SOURCE_DIR}/src/DoMath")
target_include_directories(MathLibrary PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

add_subdirectory(test)








