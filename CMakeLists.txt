cmake_minimum_required(VERSION 3.14)
project(first)

set(CMAKE_CXX_STANDARD 11)

add_executable(first main.cpp linkedTable/linkedTable.h linkedTable/linkedTable.cpp stack/stack.cpp queue/queue.cpp array/array.cpp string/mystring.cpp Tree/Tree.cpp)