cmake_minimum_required(VERSION 3.18)
project(Graph)

set(CMAKE_CXX_STANDARD 14)

add_executable(
  Graph
  src/BFS_graph.cpp
  src/Dijkstra_graph.cpp
  main.cpp
  include/BFS_graph.hpp
  include/Dijkstra_graph.hpp
)
