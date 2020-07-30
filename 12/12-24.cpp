#include <iostream>
#include <string>
#include <typeinfo>

int main() {
    std::string str;
    while ( std::cin >> str ) {
        char *p = new char[str.size()];
        for ( auto i = 0; i < str.size(); ++i ) {
            *(p + i) = str[i];
        }
        delete [] p;
    }
    return 0;
}
