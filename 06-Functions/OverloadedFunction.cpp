#include <iostream>
#include <iterator>

// const 修饰常量,指针可以变
void print(const char *p) {
    while ( *p ) {
        std::cout << *p;
        ++p;
    }
    std::cout << std::endl;
}

void print(const int *beg, const int *end) {
    const int *cur = beg;
    while ( cur != end ) {
        std::cout << *cur;
        ++cur;
    }
    std::cout << std::endl;
}

void print(const int ia[], size_t size) {
    size_t i = 0;
    for ( ; i < size; ++i ) {
        std::cout << *(ia + i);
    }
    std::cout << std::endl;
}

int main() {
    char str[] = "Hello World!";
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8};
    print(str);
    print(std::begin(ia), std::end(ia));
    return 0;
}
