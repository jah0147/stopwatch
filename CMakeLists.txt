cmake_minimum_required(VERSION 3.22)
project(counter)

set(CMAKE_CXX_STANDARD 17)

#for Exe to work
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(counter main.cpp main.h)
