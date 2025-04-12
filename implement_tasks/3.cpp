// Хотим, чтобы это работало

#include <iostream>

class FirstClass;
class SecondClass;

struct FirstClass {
  FirstClass(const SecondClass& second) {
    value = second.first_value + second.second_value;
  }

  int value;
};

struct SecondClass {
  SecondClass() = default;

  SecondClass(const FirstClass& first) {
    first_value = second_value = first.value;
  }

  int first_value;
  int second_value;
};

int main() {
  SecondClass sc;
  sc.first_value = 3;
  sc.second_value = 4;

  FirstClass fc(sc);

  std::cout << fc.value;
  return 0;
}