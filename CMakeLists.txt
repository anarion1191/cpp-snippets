cmake_minimum_required(VERSION 3.5)

project(cpp-snippets)

include_directories("${PROJECT_SOURCE_DIR}/include")
# is it better to use add_definitions() ?
set(CMAKE_CXX_FLAGS "-std=c++17 -stdlib=libc++ -Wall -lc++ -lc++abi")

add_executable(base64_test ${PROJECT_SOURCE_DIR}/src/base64.cpp)
