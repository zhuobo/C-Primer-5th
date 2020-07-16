#include <iostream>
using std::cin; using std::cout; using std::string; using std::endl;

int main() {
    string temp, res;
    while ( cin >> temp ) {
        // res += temp;
        res += (temp + " ");
    }
    cout << res << endl;
}