cmake_minimum_required(VERSION 3.13)
project(leetcode-c C)

set(CMAKE_C_STANDARD 99)
add_executable(leetcode-c src/main.c src/common/array.h src/common/array.c )