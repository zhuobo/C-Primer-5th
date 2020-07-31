#include <iostream>

int main() {
    // for ( int i = 10; i >= 0; i--) {
    //     std::cout << i << std::endl;
    // }

    int left = 0, right = 0;
    std::cout << "Enter two integer and print integers between the two integers" << std::endl;
    std::cin >> left >> right;
    std::cout << "Result: ";
    for ( int i = left; i <= right; i++) {
        std::cout << i << std::endl;
    }
    return 0;


}