#include <iostream>
#include <vector>
#include <string>

using std::vector;using std::cin;using std::cout; using std::string; using std::endl;

int main() {
    string word;
    vector<string> svec;
    while ( cin >> word ) {
        svec.push_back(word);
    }
    for ( auto &word : svec ) {
        for ( auto &c : word ) {
            c = toupper(c);
        }
    }
    for ( auto word : svec ) {
        cout << word << endl;
    }
    return 0;
}