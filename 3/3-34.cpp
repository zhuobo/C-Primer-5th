#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9};
    int *p = arr;
    int *q = arr + 5;
    p += q - p;
    std::cout << p << " " << q << std::endl;
}