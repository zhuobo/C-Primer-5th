#include <iostream>

using std::cout;

int main() {
    unsigned long ul1 = 3, ul2 = 7;
    cout << (ul1 & ul2) << " " << (ul1 | ul2) << " " << (ul1 && ul2) << " " << (ul1 || ul2);
}