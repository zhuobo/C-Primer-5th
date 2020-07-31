#include <iostream>

using std::cin; using std::cout; using std::endl; using std::cerr;

double division(int a, int b) {
    if ( b == 0 ) {
        throw "Division by zero Condition!";
    }
    return ( a / b);
}

int main() {
    int a, b;
    double res;
    cin >> a >> b;
    try {
        res = division(a, b);
        cout << "a / b = " << res << endl;
    } catch ( const char *msg ) {
        cerr << msg << endl;
    }
    return 0;
}

