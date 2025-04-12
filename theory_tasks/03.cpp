// В каком стандарте C++ появилась следующая конструкция:

#include <iostream>
#include <vector>

int main() {
  std::vector<int> container;

  for (int element : container) {
    std::cout << element;
  }

  return 0;
}