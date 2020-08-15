#include <iostream>

template<typename T, unsigned size> constexpr unsigned getSize(const T (&srr)[size]) {
    return size;
}

int main() {
    int a[] = {
        1, 3, 4, 5, 1, 1, 34, 123, 324, 13
    };
    std::cout << getSize(a) << std::endl;
}
