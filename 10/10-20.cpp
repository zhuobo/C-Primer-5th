#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;using std::cin;using std::endl;
using std::vector; using std::string;

int main() {
    vector<string> svec;
    string str;
    while ( cin >> str ) {
        svec.push_back(str);
    }
    int count = std::count_if(svec.begin(), svec.end(),
            [](const string &s){ return s.size() > 6;});
    cout << count << endl;
    return 0;
}
