cmake_minimum_required(VERSION 3.18)
project(LinkedList)

set(CMAKE_CXX_STANDARD 14)

add_executable(
  LinkedList
  src/FIFOLL.cpp
  src/LIFOLL.cpp
  src/SingleLL.cpp
  main.cpp
  include/FIFOLL.hpp
  include/LIFOLL.hpp
  include/SingleLL.hpp
)
