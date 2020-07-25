#include <iostream>
#include <iterator> // to use function begin and end.

void printArray(int *array, size_t size) {
    for ( size_t i = 0; i < size; ++i ) {
        std::cout << *(array + i) << std::endl;
    }
}

int main() {
    int array[] = {1,2,3,4,5,2,1,};
    printArray(array, std::end(array) - std::begin(array));
    return 0;
}
