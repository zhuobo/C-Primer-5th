#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec;
    int num;
    while ( std::cin >> num ) {
        ivec.emplace_back(num);
    }
    for ( int i = 0; i < ivec.size(); ++i ) {
        ivec[i] = ivec[i] % 2 == 0 ? ivec[i] : ivec[i] * 2;
    }
    for ( auto num : ivec ) {
        std::cout << num << std::endl;
    }
    return 0;
}