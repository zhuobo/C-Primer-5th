#include <iostream>

// 正确，一旦一个形参被赋予默认值，那么后面的形参都必须赋予默认值
int ff(int a, int b = 0, int c = 0) {
    return a + b + c;
}

// 错误，后面两个形参也该有默认值
char *init(int ht = 24, int wd, char background) {
    char c = 'a';
    char *p = &c;
    return p;
}

int main() {
    return 0;
}
