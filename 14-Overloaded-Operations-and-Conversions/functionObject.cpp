#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <algorithm>

int add(int a, int b) {
    return a + b;
}

struct divide {
    int operator()(int denominator, int divisor) {
        return denominator / divisor;
    }
};

int main() {
    std::vector<std::string> svec = {"you", "are", "all", "trump", "alice", "hello", "states"};
    std::sort(svec.begin(), svec.end(), std::less<std::string>());
    for ( const auto s : svec ) {
        std::cout << s << std::endl;
    }
    std::cout << "================================================================================" << std::endl;
    std::function<int(int, int)> f1 = add;
    std::function<int(int, int)> f2 = divide();
    std::function<int(int, int)> f3 = [](int i, int j) { return i * j; };
    std::cout << f1(8, 2) << std::endl;
    std::cout << f2(4, 2) << std::endl;
    std::cout << f3(5, 2) << std::endl;
    return 0;
    
}
