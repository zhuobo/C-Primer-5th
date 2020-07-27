#include <iostream>

int main() {
    auto f = [](int b, int a){ return a + b;};
    std::cout << f(5, 8) << std::endl;
    return 0;
}
