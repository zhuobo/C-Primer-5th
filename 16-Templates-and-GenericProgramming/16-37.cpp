#include <iostream>
#include <algorithm>

int main() {
    int a = 100;
    double b = 100.1;
    int d = 122;
    auto c = std::max(a, b);
}

/**
 * 在调用标准库函数max的时候不能够传递两个不同类型的实参,因为返回值类型
 * 和这两个模板实参类型相同,如果提供的是两个不同类型的实参,那么就无法推断出
 * 返回值的类型
 **/
