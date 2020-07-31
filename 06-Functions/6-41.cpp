#include <iostream>

char *init(int ht, int wd = 80, char backgrnd = ' ') {
    char c = 'c';
    char *p = &c;
    return p;
}

int main() {
    // 1. 调用错误
    // char *p = init();
    // 2. correct call
    // char *p = init(24, 10);
    // 3. 错误, '*'被赋值给第二个参数wd
    char *p = init(14, '*');
}
