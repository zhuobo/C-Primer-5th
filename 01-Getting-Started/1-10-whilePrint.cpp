#include <iostream>

int main() {
    int val = 10;
    while ( val >= 0) {
        if (val == 0) {
            std::cout << val--;
        }
        else {
            std::cout << val-- << " ";
        }
    }
    return 0;
}