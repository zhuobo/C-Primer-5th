#include <iostream>

using std::cin; using std::cout;

int fact(int n) {
    if ( n == 1 ) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    int n;
    cout << "Enter a number n and We will the fact of n" << std::endl;
    cin >> n;
    cout << fact(n) << std::endl;
    return 0;
}
