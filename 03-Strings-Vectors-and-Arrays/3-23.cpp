#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main() {
    vector<int> ivec;
    int ival;
    while ( cin >> ival ) {
        ivec.push_back(ival);
    }
    for ( vector<int>::iterator it = ivec.begin(); it != ivec.end(); it++ ) {
        *it = (*it) * 2;
    }
    for ( auto num : ivec ) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}