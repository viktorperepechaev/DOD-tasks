// Как нам в C++ узнать какой тип у переменной? Например, какой тип у "hello"?

#include <iostream>

template <typename T, typename U>
T bar(T a, U& b) {
    std::cout << __PRETTY_FUNCTION__ << '\n';
    return T();
}

int main() {
    bar(42, "hello");
}