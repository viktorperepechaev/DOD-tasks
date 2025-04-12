// Что выведется?

#include <iostream>

int main() {
  double val = 1e18 + 7;

  std::cout << std::fixed << val << '\n';

  return 0;
}