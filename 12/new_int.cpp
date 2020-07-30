#include <iostream>

int main() {
    int *ip1 = new int;// *ip1 未定义
    int *ip2 = new int();// *ip2 == 0
    std::cout << *ip1 << std::endl;
    std::cout << *ip2 << std::endl;
}
