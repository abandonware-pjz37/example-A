#include <example_A/foo.hpp>

#include <iostream> // std::cout

namespace example_A {

int foo() {
  std::cout << "hello from example A" << std::endl;
  return 0x314;
}

} // namespace example_A
