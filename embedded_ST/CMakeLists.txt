cmake_minimum_required(VERSION 3.10)

project(embedded_ST C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

include_directories(include)

add_executable(embedded_ST
    src/main.c
)