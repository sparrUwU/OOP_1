cmake_minimum_required(VERSION 3.10)

project(OOP_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(
    main 
    main.cpp 
    functions.cpp
)

enable_testing()

add_subdirectory(tests)