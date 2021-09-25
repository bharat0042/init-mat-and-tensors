cmake_minimum_required(VERSION 3.5)

project(using-eigen LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories("C:/Dev/projects/libs/eigen-3.3.8/Eigen")

add_executable(using-eigen main.cpp)
