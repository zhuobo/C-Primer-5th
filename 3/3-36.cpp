#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cout;
using std::cin;

bool cmpIntArray(int *arr1, int len1, int *arr2, int len2) {
    if ( len1 != len2 ) {
        return false;
    }
    for ( int i = 0; i < len1; i++ ) {
        if ( arr1[i] != arr2[i] ) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 4}, arr2[] = {1, 2, 3, 4};
    cout << cmpIntArray(arr1, 4, arr2, 4) << endl;
}

