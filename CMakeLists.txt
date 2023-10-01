cmake_minimum_required(VERSION 3.26)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_library(untitled src/main.c
        src/base/base.c
        src/base/maths/matrix3D.c
        src/base/maths/vector3D.c)
