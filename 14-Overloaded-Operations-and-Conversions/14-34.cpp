#include <iostream>

class A {
public:
    int operator()(int a, int b, int c) {
        if ( a >= 0 && a < 10 ) {
            return a;
        }
        else if ( a >= 10 && a < 20 ) {
            return b;
        }
        return c;
    }
};

int main() {
    A a;
    // 看起来是在"调用对象", 但是事实上是在执行重载的函数调用运算符
    std::cout << a(23, 5, 10) << std::endl;
}
