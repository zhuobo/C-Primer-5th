#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin; using std::cout; using std::endl;

// judge if v1 is the prefix of v2 or v2 is the prefix of v1
bool isPrefix(vector<int> v1, vector<int> v2) {
    int minLen = std::min(v1.size(), v2.size());
    for ( int i = 0; i < minLen; ++i ) {
        if ( v1[i] != v2[i] ) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> v1, v2;
    cout << " Please enter v1 : ";
    int temp; 
    while ( cin >> temp ) {
        v1.emplace_back(temp);
    }
    cin.clear();
    cout << " Please enter v2 : ";
    while ( cin >> temp ) {
        v2.emplace_back(temp);
    }
    if ( isPrefix(v1, v2) ) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}