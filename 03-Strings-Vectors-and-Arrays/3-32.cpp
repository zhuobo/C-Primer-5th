#include <iostream>
#include <iterator>

int main() {
    int iarr[10];
    for ( unsigned i = 0; i < 10; i++ ) {
        iarr[i] = i;
    }
    int iarr2[10];
    for ( int i = 0; i < 10; i++ ) {
        iarr2[i] = iarr[i];
    }
    for ( int i = 0; i < 10; i++ ) {
        std::cout << iarr2[i] << std::endl;
    }
    int *p = iarr, *e = &iarr[10];
    for ( ; p != e; p++ ) {
        std::cout << *p << std::endl;
    }

    int *start = begin(iarr), *last = end(iarr);
    for ( ; start != last; start++ ) {
        std::cout << *start << std::endl;
    }
}