#include <cstdlib> // EXIT_SUCCESS
#include <iostream> // std::cout
#include "example_A/foo.hpp"

int main() {
  int result = example_A::foo();
  std::cout << "result = " << result << std::endl;
  return EXIT_SUCCESS;
}
