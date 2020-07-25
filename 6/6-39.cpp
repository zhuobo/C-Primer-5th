#include <iostream>
/*
int calc(int a, int b) {
    return a + b;
}
// 顶层const，函数重定义
int calc(const int, const int) {
    return a + b;
}
*/

/*
函数模糊定义
int get() {
    return 0;
}

double get() {
    return 0;
}
*/

int *reset(int *) {
   int a = 0;
   int *p = &a;
   return p;
}

double *reset(double *) {
    double b = 0;
    double *p = &b;
    return p;
}

int main() {
    return 0;
}

