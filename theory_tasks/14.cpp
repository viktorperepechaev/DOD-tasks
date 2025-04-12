#include <iostream>

template <typename T>
T bar(T a) {
    std::cout << __PRETTY_FUNCTION__ << '\n';
    return T();
}


int main() {
  char* str = "X";

  std::cout << str;
  
  return 0;
}
