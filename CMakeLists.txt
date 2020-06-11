cmake_minimum_required(VERSION 3.16)
project(CLionProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
add_subdirectory(src)
add_executable(CLionProject src/data.cpp)

add_subdirectory(Google_tests)