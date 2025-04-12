// Хотим, чтобы вывелось значение первого элемента

#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {1, 2, 3};

  auto begin_iterator = vec.begin();

  vec.push_back(228);

  std::cout << *begin_iterator;

  return 0;
}