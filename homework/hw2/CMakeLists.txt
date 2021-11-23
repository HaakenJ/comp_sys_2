cmake_minimum_required(VERSION 3.17)
project(hw2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

add_executable(hw2 main.cpp)

find_package(Threads REQUIRED)
target_link_libraries(hw2 Threads::Threads)