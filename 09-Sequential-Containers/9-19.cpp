#include <string>
#include <list>
#include <iostream>

int main() {
    std::list<std::string> sque;
    std::string str;
    while ( std::cin >> str ) {
        sque.emplace_back(str);
    }
    auto beg = sque.begin(), end = sque.end();
    while ( beg != end ) {
        std::cout << *beg << std::endl;
        ++beg;
    }
    return 0;
}
