// Хотим, чтобы функция foo(vec) прибавляла 10, к каждому элементу.

#include <iostream>
#include <vector>

void foo(std::vector<int>& vec) {
  for (auto element : vec) {
    element += 10;
  }
}

int main() {
  std::vector<int> vec = {1, 2, 3};

  foo(vec);

  for (auto element : vec) {
    std::cout << element << ' ';
  }
  
  return 0;
}