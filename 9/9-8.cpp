#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> strlist;
    strlist.push_back("123");
    strlist.push_back("456");
    strlist.push_back("789");
    std::list<std::string>::const_iterator con_iter = strlist.begin();
    while ( con_iter != strlist.end() ) {
        std::cout << *con_iter << " ";
        // *con_iter = "new";
        ++con_iter;
    }
    std::cout << std::endl;
    return 0;
}
