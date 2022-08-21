cmake_minimum_required(VERSION 3.22)
project(toy)

set(CMAKE_CXX_STANDARD 14)

add_executable(toy main.cpp toy.h shared_ptr_toy.cpp shared_ptr_toy.h dog.cpp dog.h)
