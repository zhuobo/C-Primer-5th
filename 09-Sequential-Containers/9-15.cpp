#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec1 = {1,3,4,5,9};
    std::vector<int> ivec2(ivec1);
    ivec2.push_back(1);
    std::cout << (ivec1 == ivec2) << std::endl;
    return 0;
}
