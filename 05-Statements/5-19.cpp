#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str1, str2;
    do {
        if ( str1.size() < str2.size() ) {
            cout << str1 << endl;
        }
        else {
            cout << str2 << endl;
        }
    } while ( cin >> str1 >> str2);
}