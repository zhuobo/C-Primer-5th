#include <iostream>
#include <string>
#include <vector>
using std::vector; using std::string;

int main() {
    string s;
    vector<string> svec;
    while ( std::cin >> s ) {
        svec.push_back(s);
    }
    for ( auto s : svec ) {
        std::cout << s << std::endl;
    }
}