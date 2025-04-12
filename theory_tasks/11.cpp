// Что выведет код?

#include <iostream>
#include <type_traits>

int main() {
  char char1 = 'a';
  char char2 = 'b';

  std::cout << std::is_same<decltype(char1 + char2), char>::value;
  return 0;
}
