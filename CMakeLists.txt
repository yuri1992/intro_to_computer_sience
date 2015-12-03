cmake_minimum_required(VERSION 3.3)
project(intro_to_computer_sience)

include_directories("${YOUR_DIRECTORY} task3")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp)
add_executable(testing ${SOURCE_FILES})

