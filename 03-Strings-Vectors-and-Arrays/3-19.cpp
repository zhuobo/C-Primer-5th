#include <iostream>
#include <vector>
using std::vector;

int main() {
    vector<int> ivec1(10, 42);
    vector<int> ivec2{10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> ivec3;
    for ( vector<int>::size_type i = 0; i < 10; i++ ) {
        ivec3.push_back(42);
    }
    std::cout << ivec1.size() << " " << ivec2.size() << " " << ivec3.size() << std::endl;
}