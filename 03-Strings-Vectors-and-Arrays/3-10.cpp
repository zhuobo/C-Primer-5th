#include <iostream>
using std::string; using std::cin; using std::cout; using std::endl;

int main() {
    string str;
    while ( cin >> str ) {
        string res;
        for ( auto c : str ) {
            if ( !ispunct(c) ) {
                res += c;
            }
        }
        cout << res << endl;
    }
    return 0;
} 