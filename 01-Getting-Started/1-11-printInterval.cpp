#include <iostream>

int main() {
    int left = 0, right = 0;
    std::cout << "Enter two integer and print integers between the two integers" << std::endl;
    std::cin >> left >> right;
    std::cout << "Result: ";
    while ( left <= right) {
        if ( left != right) {
            std::cout << left << " ";
        }
        else {
            std::cout << left << std::endl;
        }
        left++;
    }
    return 0;
}