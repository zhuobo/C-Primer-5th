#include <iostream>
using namespace std;

int main() {
    int a, b, res;
    cin >> a >> b;
    try {
        if ( b == 0 ) {
            throw -1;
        }
        else {
            res = a / b;
        }
    }
    catch(int e) {
        cout << "ERROR " << e << endl;
    }
    cout << "a / b = " << res << endl;
    return 0;
}
