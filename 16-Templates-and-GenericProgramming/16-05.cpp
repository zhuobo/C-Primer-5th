#include <iostream>
#include <string>

// 能处理任意大小，任意数据类型的数组
// 使用模板的类型参数和非类型参数
// T 类型参数
// N 非类型参数，数组大小
template <typename T, unsigned N> inline void print(const T (&t)[N]) {
    for ( auto elem : t ) {
        std::cout << elem << std::endl;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    std::string s[] = {"1234", "34ds", "sdfa"};
    print(a);
    print(s);
}
