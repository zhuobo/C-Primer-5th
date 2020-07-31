#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

void print(vector<int>::const_iterator beg, vector<int>::const_iterator end) {
    while ( beg != end ) {
        cout << *beg << " ";
        ++beg;
    }
    cout << endl;
}

int main() {
    vector<int> ivec;
    int num;
    while ( cin >> num ) {
        ivec.emplace_back(num);
    }
    print(ivec.begin(), ivec.end());
    return 0;
}
