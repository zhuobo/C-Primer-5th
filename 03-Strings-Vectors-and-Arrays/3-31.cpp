#include <iostream>

int main() {
    int iarr[10];
    for ( unsigned i = 0; i < 10; i++ ) {
        iarr[i] = i;
    }
    for ( auto i : iarr ) {
        std::cout << i << std::endl;
    }
    return 0;
}