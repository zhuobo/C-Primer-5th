#include <iostream>
#include <vector>

int main() {
    // 越界访问
    std::vector<int> ivec;
    // std::cout << ivec[0] << std::endl;
    // std::cout << ivec.at(0) << std::endl;
    std::cout << ivec.front() << std::endl;
}
