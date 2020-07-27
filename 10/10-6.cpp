#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec = {1, 2, 3,4,5, 9};
    int len = ivec.size();
    std::fill_n(ivec.begin(), len, 0);
    for ( auto num : ivec ) {
        std::cout << num << " ";
    }
    return 0;
}
