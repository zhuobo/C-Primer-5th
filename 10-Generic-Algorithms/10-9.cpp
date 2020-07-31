#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void elimdups(std::vector<std::string> &svec) {
    sort(svec.begin(), svec.end());
    auto iter = unique(svec.begin(), svec.end());
    svec.erase(iter, svec.end());
}

int main() {
    std::vector<std::string> svec;
    std::string str;
    while ( std::cin >> str ) {
        svec.push_back(str);
    }
    elimdups(svec);
    for ( auto word : svec ) {
        std::cout << word << std::endl;
    }
    
}
