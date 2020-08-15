#include <iostream>
#include <string>

// 标准库函数 begin 和 end 是函数模板，参数是一个数组的引用，返回一个迭代器
template<typename T, unsigned size> T* _begin(T (&arr)[size]) {
    return arr;
}

template<typename T, unsigned size> T* _end(T (&arr)[size]) {
    return arr + size;
}

int main() {
    std::string s[] = {"aasdf", "asdf", "j;kl"};
    int a[] = {1, 3, 4};
    std::cout << *_begin(a) << std::endl;
    std::cout << *_begin(s) << std::endl;
    std::cout << *(_end(a) - 1) << std::endl;
    std::cout << *(_end(s) - 1) << std::endl;
}
