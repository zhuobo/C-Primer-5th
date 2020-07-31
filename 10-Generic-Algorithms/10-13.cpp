#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::vector; using std::string;
using std::cin; using std::cout; using std::endl;

bool length_5_or_more(const string &s) {
    return s.size() >= 5;
}

int main() {
    vector<string> svec;
    string s;
    while ( cin >> s ) {
        svec.emplace_back(s);
    }
    auto iter = std::partition(svec.begin(), svec.end(), length_5_or_more);
    for ( auto beg = svec.begin(); beg != iter; ++beg ) {
        cout << *beg << endl;
    }
    return 0;
}
