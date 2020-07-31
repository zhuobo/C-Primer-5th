#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main() {
    std::string str;
    int ival;
    // std::pair<std::string, int> p;
    std::vector<std::pair<std::string, int> > pvec;
    while ( std::cin >> str >> ival ) {
        std::pair<std::string, int> p(str, ival);
        // p = make_pair(str, ival);
        // std::pair<std::string, int> p = {str, ival}
        pvec.push_back(p);
    }
    for ( const auto &p : pvec ) {
        std::cout << p.first << "-----" << p.second << std::endl;
    }
    return 0;
}
