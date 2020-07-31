#include <iostream>

void swapPointer(int* &a, int* &b) {
    int *c = a;
    a = b;
    b = c;
}

int main() {
    int a = 1, b = 2;
    int *ap = &a, *bp = &b;
    int* &apref = ap;
    int* &bpref = bp;
    swapPointer(apref, bpref);
    std::cout << *apref << " " << *bpref << std::endl;
    return 0;
}
