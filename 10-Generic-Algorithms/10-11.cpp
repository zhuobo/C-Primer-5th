#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(const std::string &s1, const std::string &s2) {
    return s1.size() < s2.size();
}

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
    stable_sort(svec.begin(), svec.end(),
            [](const std::string &s1, const std::string &s2)
            {return s1.size() < s2.size();});
    for ( auto word : svec ) {
        std::cout << word << std::endl;
    }
    
}
