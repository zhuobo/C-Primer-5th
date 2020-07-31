#include <iostream>

int cmp(int *a, int b) {
    return *a > b ? *a : b;
}

int main() {
    int a, b;
    int *c = &a;
    while ( std::cin >> *c >> b ) {
        std::cout << cmp(c, b) << std::endl;
    }
    return 0;
}
