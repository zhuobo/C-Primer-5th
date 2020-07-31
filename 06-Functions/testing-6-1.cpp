#include <iostream>

size_t count_calls() {
    // local static object在函数退出时不会被销毁
    // 第一次执行时被初始化,没有显式初始化则会被默认初始化
    static size_t ctr = 0;
    return ++ctr;
}

int main() {
    for ( int i = 0; i < 10; ++i ) {
        std::cout << count_calls() << std::endl;
    }
    return 0;
}
