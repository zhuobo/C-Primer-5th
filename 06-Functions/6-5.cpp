#include <iostream>

int myAbs(int num) {
    return num > 0 ? num : -num;
}

int main() {
    int num;
    std::cout << "Enter a number and we will give you the abs of the number" << std::endl;
    std::cin >> num;
    std::cout << myAbs(num) << std::endl;
    return 0;
}
