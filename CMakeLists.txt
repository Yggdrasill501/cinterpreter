cmake_minimum_required(VERSION 3.10)
project(Cinterpreter LANGUAGES CC17 )

set(CMAKE_C_STANDARD C17)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(Cinterpreter src/main.c)
