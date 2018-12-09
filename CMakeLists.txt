cmake_minimum_required(VERSION 3.12)
project(Lecture-9)

set(CMAKE_CXX_STANDARD 17)

add_library(complex complex.h complex.cpp)

add_executable(Lecture-9 main.cpp)
target_link_libraries(Lecture-9 complex)