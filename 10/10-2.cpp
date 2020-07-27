#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> svec;
    std::string str;
    while ( std::cin >> str ) {
        svec.emplace_back(str);
    }
    std::cout << "Please enter the string you want to find: ";
    std::cin.clear();
    std::cin >> str;
    int str_count = std::count(svec.begin(), svec.end(), str);
    std::cout << str_count << std::endl;
    return 0;
}

