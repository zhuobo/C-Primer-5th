#include <iostream>
using std::cout;
using std::endl;

int main() {
    // 1. 指针是对象，引用不是对象
    // 2. 指针定义时不用赋值，引用需要
    // 3. 引用不是对象，不能定义指针指向引用
    // 4. 
    int i = 0;
    long *p = &i;
}