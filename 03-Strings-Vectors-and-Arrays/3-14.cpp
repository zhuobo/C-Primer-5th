#include <iostream>
#include <string>
#include <vector>
using std::vector; using std::string;

int main() {
    int ival = 0;
    vector<int> ivec;
    while ( std::cin >> ival ) {
        ivec.push_back(ival);
    }
    std::cout << ivec.size() << std::endl;
    for ( auto ival : ivec ) {
        std::cout << ival << std::endl;
    }
}