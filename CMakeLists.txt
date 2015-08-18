cmake_minimum_required(VERSION 2.8)

project(snippet-test)

include_directories("${PROJECT_SOURCE_DIR}/src/include")
add_definitions("-std=c++11 -Wall")

add_executable(snippet-test ${PROJECT_SOURCE_DIR}/src/main.cpp)
