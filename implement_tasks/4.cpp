// В чём проблема, как исправить?

#include <iostream>

int& GetNumber() {
  int x = 228;

  return x;
}

int main() {
  int& num = GetNumber();

  std::cout << num;

  return 0;
}