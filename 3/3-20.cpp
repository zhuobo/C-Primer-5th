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

    for ( vector<int>::size_type i = 0; i < ivec.size() - 1; i++ ) {
        cout << ivec[i] + ivec[i + 1] << endl;
    }

    for ( vector<int>::size_type i = 0; i < ivec.size() / 2; i++ ) {
        cout << ivec[i] + ivec[ivec.size() - 1 - i] << endl;
    }
    return 0;
}