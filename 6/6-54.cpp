#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using PF = int (*)(int, int);
int func(int, int);

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int dev(int a, int b) {
    int res = 0;
    try {
        if ( b == 0 ) {
            throw "divided by zero!";
        }
        else {
            res = a / b;
        }
    }
    catch ( string err ) {
        std::cout << err << std::endl;
    }
    return res;
}
int main() {
    vector<PF> pfv;
    pfv.push_back(add);
    pfv.push_back(sub);
    pfv.push_back(mul);
    pfv.push_back(dev);
    int a = 8, b = 0;
    for ( auto p : pfv ) {
        std::cout << p(a, b) << std::endl;
    }
    return 0;
}
