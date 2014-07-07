cmake_minimum_required(VERSION 2.8)
project(example-A CXX)

include("cmake/HunterGate.cmake")

HunterGate(
    URL "https://github.com/ruslo/hunter/archive/multiversion-test-01.tar.gz"
    SHA1 "798501e983f14b28b10cda16afa4de69eee1da1d"
)

add_library(example_A example_A/foo.hpp example_A/foo.cpp)

include_directories("./")
add_executable(example_A_test test.cpp)
target_link_libraries(example_A_test example_A)

enable_testing()
add_test("simple-test-example-A" example_A_test)

install(TARGETS example_A DESTINATION ".")
install(FILES example_A/foo.hpp DESTINATION "example_A")
