cmake_minimum_required(VERSION 2.8)
project(example-A CXX)

add_library(example_A example_A/foo.hpp example_A/foo.cpp)

include_directories("./")
add_executable(example_A_test test.cpp)
target_link_libraries(example_A_test example_A)

enable_testing()
add_test("simple-test-example-A" example_A_test)
