#include <iostream>
#include <functional>
#include <map>
#include <string>

int add(int a, int b) {
    return a + b;
}

struct divide {
    int operator()(int a, int b) {
        return a / b;
    }
};

auto mod = [](int i, int j) {
    return i % j;
};

int main() {
    std::map<std::string, std::function<int(int, int)>> binops = {
        {"+", add},
        {"-", std::minus<int>()},
        {"/", divide()},
        {"*", [](int i, int j){ return i * j;}},
        {"%", mod}
    };
    int a = binops["+"](8, 4);
    int b = binops["-"](8, 4);
    int c = binops["*"](8, 4);
    int d = binops["/"](8, 4);
    int e = binops["%"](8, 3);
    std::cout << a << " " << b << " " << c << " " << d << " " << e << std::endl;
    return 0;
}
