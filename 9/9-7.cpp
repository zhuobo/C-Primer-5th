#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(3);
    ivec.push_back(2);
    std::vector<int>::iterator iter = ivec.begin();
    while ( iter != ivec.end() ) {
        std::cout << *iter << " ";
        ++iter;
    }
    std::cout << std::endl;
    return 0;
}
