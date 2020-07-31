#include <iostream>
using std::string; using std::cin; using std::cout; using std::endl;

int main() {
    string s;
    while ( cin >> s ) {
        for ( char &c : s ) {
            c = 'X';
        }
        cout << s << endl;
    }
}