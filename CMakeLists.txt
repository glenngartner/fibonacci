cmake_minimum_required(VERSION 3.8)
project(fibonacci)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/Fibonacci.cpp Include/Fibonacci.h)
add_executable(fibonacci ${SOURCE_FILES})