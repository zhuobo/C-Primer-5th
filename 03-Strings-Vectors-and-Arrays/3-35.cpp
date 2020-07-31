#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    int *p = arr;
    for ( int i = 0; i < 10; i++ ) {
        *(p + i) = 0;
    }
    for ( int i = 0; i < 10; i++ ) {
        std::cout << arr[i] << std::endl;
    }
}