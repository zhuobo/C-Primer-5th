#include <iostream>

int main() {
    int a;
    std::cin >> a;
    auto f = [a](int b){ return a + b;};
    std::cout << f(5) << std::endl;
    return 0;
}
