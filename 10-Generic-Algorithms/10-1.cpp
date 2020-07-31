#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> ivec;
    int num;
    while ( std::cin >> num ) {
        ivec.emplace_back(num);
    }
    std::cout << "Please enter the number you want to find: ";
    std::cin.clear();
    std::cin >> num;
    int num_count = std::count(ivec.begin(), ivec.end(), num);
    std::cout << num_count << std::endl;
    return 0;
}
