#include <iostream>
#include <iterator>
#include <vector>
#include <map>
#include <list>

int main() {
    // 可以定义一个 vector 迭代器到 int 的映射,因为 vector 的迭代器支持比较运算符 <
    std::map<std::vector<int>::iterator, int> m1; 
    // 反之 list 的迭代器则不支持比较
    std::map<std::list<int>::iterator, int> m2;
}
