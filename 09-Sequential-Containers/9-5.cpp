#include <iostream>
#include <vector>

std::vector<int>::iterator find(std::vector<int>::iterator begin, std::vector<int>::iterator end, int num) {
    while ( begin != end ) {
        if ( *begin == num ) {
            return begin;
        }
        ++begin;
    }
    return end;
}

int main() {
    std::vector<int> ivec;
    int num;
    std::cout << "Enter numbers into the vector" << std::endl;
    while ( std::cin >> num ) {
        ivec.emplace_back(num);
    }
    std::cin.clear();
    auto begin = ivec.begin(), end = ivec.end();
    std::cout << "Enter the number you want to find in the vector : ";
    std::cin >> num;
    std::cout << "The size of the vector is " << ivec.size() << ". Enter the range you want to find (from 0 to " << ivec.size() - 1 << ")." << std::endl ;
    int left, right;
    std::cin >> left >> right;
    begin = begin + left;
    end = begin + right + 1;
    if ( find(begin, end, num) == ivec.end() ) {
        std::cout << "Not in the range of vector" << std::endl;
    }
    else {
        std::cout << "YES" << std::endl;
    }
    return 0;
}
