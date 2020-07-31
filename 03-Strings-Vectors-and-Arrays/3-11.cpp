#include <iostream>
#include <typeinfo>
int main() {
    const std::string s = "Keep out!";
    for ( auto &c : s ) {
        std::cout << c << std::endl;
        std::cout << typeid(c).name() << std::endl;
    }
}