#include <iostream>

int main() {
    // [capture list] (parameter list) -> return type { function body };
    auto f = []() -> int { return 42; };
    std::cout << f() << std::endl;
}
