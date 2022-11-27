cmake_minimum_required(VERSION 3.22)
project(Programming_Project___Starter_Code)

set(CMAKE_CXX_STANDARD 14)

include_directories(apsc143project)

add_executable(Programming_Project___Starter_Code
        apsc143project/apsc143project.cpp
        apsc143project/colours.cpp
        apsc143project/colours.h)
