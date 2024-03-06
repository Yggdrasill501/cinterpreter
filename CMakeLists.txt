cmake_minimum_required(VERSION 3.10)
project(Cinterpreter Version 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD C17)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

add_executable(Cinterpreter src/main.c)
