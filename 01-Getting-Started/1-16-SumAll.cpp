#include <iostream>

int main() {
    int val = 0, sum = 0;
    while (std::cin >> val) {
        sum += val;
    }
    std::cout << "The sum of ALL numbers is: " << sum << std::endl;
    return 0; 
}