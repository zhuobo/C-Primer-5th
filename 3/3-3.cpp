#include <iostream>
using std::cin; using std::cout; using std::string; using std::endl;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    if ( str1 > str2 ) {
        cout << str1 << endl;
    }
    else {
        cout << str2 << endl;
    }

    if ( str1.size() > str2.size() ) {
        cout << str1 << endl;
    }
    else {
        cout << str2 << endl;
    }
    return 0;
}