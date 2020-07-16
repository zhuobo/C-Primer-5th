#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::string; using std::endl;

int main() {
    string line;
    while ( getline(cin, line) ) {
        for ( auto it = line.begin(); it != line.end() && !isspace(*it); it++ ) {
            *it = toupper(*it);
        }
        for ( auto it = line.begin(); it != line.end(); it++) {
            cout << *it;
        }
        cout << endl;
    }
}