#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec(10, 2);
    ivec.resize(100, 1);
    std::cout << ivec[99];
    ivec.resize(5);
    for ( auto num : ivec ) {
        std::cout << num << " ";
    }
    return 0;
}
