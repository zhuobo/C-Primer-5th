#include <iostream>
using std::cout;
using std::endl;

int main() {
    int ival1 = 3, ival2 = 4, *p = &ival1;    
    cout << *p << endl;
    p = &ival2;
    cout << *p << endl; 
    *p = 8;
    cout << *p << endl;
    cout << ival1 << endl;
    cout << ival2 << endl;
}