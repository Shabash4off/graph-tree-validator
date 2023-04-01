cmake_minimum_required(VERSION 3.25)
project(graph)

set(CMAKE_CXX_STANDARD 17)

add_executable(graph main.cpp traversal-methods/TraversalMethod.cpp traversal-methods/TraversalMethod.h traversal-methods/DFS.cpp traversal-methods/DFS.h traversal-methods/BFS.cpp traversal-methods/BFS.h Graph.cpp Graph.h)
