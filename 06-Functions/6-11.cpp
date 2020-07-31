#include <iostream>

using std::cin;
using std::cout;

void resetToZero(int &n) {
    n = 0;
}

int main() {
    int n;
    cin >> n;
    resetToZero(n);
    cout << n;
}
