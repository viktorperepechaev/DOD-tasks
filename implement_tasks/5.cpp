// Что выведет? Как исправить?

#include <iostream>

#define SQUARE(x) x * x

int main() {
  int a = 3;

  std::cout << SQUARE(a + 1);

  return 0;
}