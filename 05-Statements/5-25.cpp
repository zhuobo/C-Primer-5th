#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    int a, b, res;
    cin >> a >> b;
    try {
        if ( b == 0 ) {
            throw -1;
        }
        else {
            res = a / b;
            cout << "a / b = " << res << endl;
        }
    }
    catch (int e) {
        cout << "除数不能为0" << endl;
    }
    return 0;
}
