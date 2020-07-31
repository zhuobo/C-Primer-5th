#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

string::size_type find_char(const string &str, char c, string::size_type &count) {
    auto ret = str.size();
    count = 0;
    for ( int i = 0; i < str.size(); ++i ) {
        if ( str[i] == c ) {
            if ( ret == str.size() ) {
                // The first occur
                ret = i;
            }
            ++count;
        }
    }
    return ret;
}

int main() {
    string str;
    char c;
    while ( cin >> str >> c ) {
        string::size_type count = 0;
        find_char(str, c, count);
        cout << count << endl;
    }
    return 0;
}
