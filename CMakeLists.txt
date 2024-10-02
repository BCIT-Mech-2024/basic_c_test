cmake_minimum_required(VERSION 3.15)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(hello_world C)

add_executable(hello_world src/main.c)
add_subdirectory(src/child)

