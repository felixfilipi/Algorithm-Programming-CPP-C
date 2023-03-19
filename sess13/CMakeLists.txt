cmake_minimum_required(VERSION 3.18)
project(Drawing)

set(CMAKE_CXX_STANDARD 14)

add_executable(
  Drawing
  src/Drawing.cpp
  main.cpp
  include/Drawing.hpp
)
