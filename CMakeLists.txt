cmake_minimum_required(VERSION 3.10)
project(Intro)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")

include_directories(inc)
file(GLOB_RECURSE SRC_FILES src/*.cpp)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/program)
add_executable(intro ${SRC_FILES})