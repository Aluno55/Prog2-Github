cmake_minimum_required(VERSION 3.10)
project(untitled C)

set(CMAKE_C_STANDARD 23)

add_executable(untitled main.c
        recursive.c
        something.c
        something.h
)