#include <iostream>
#include <string>

struct X {
    
    std::string name;

    X() {
        std::cout << "X()" << std::endl;
    }
    X(const std::string &s) : name(s) {
        std::cout << "X(std::string &s)" << std::endl;
    }
    X(const X& x) {
        name = x.name;
        std::cout << "X(const X&)" << std::endl;
    }
    ~X() {
        std::cout << name << " is under destructing..." << std::endl;
    }

};

void fun(const X &x) {
    std::cout << "Reference Argument" << std::endl;
}

void fun2(const X x) {
    std::cout << "Not Reference Argument" << std::endl;
}

int main() {
    X x1("aaa");
    X x2(x1);
}
