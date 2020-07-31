#include <list>
#include <iostream>
#include <vector>

int main(){
    std::list<int> ilst{1,2,4};
    std::list<int>::iterator it = ilst.begin();
    // list 迭代器不能加数字，递增或者递减表示后移前移一个元素的位置
    // 这是因为 list 不可以随机访问，list 的元素地址不是连续的
    // 而vector的元素地址是连续的，因此可以直接加数字实现随机访问
    // std::cout << *(it + 1) << std::endl;
    std::vector<int> v = {1,2,3};
    auto vit = v.begin();
    std::cout << *(vit + 1);
}
