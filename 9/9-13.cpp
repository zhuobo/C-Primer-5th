#include <list>
#include <vector>
#include <iostream>

int main() {
    std::list<int> ilst = {1, 2, 3, 4, 5};
    // 从list<int>初始化一个vector<double>,使用迭代器版本的构造函数即可
    std::vector<double> dvec(ilst.begin(), ilst.end());
    for ( auto num : dvec ) {
        std::cout << num << " ";
    }
    return 0;
}
