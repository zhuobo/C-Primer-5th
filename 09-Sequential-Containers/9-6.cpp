#include <iostream>
#include <list>

int main() {
    std::list<int> lst1;
    lst1.push_back(1);
    lst1.push_back(2);
    std::list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
    
    // 迭代器不能比较大小
    // while ( iter1 < iter2 ) {
        // std::cout << *iter1 << std::endl;
        // ++iter1;
    // }
    
    while ( iter1 != iter2 ) {
        std::cout << *iter1 << std::endl;
        ++iter1;
    }
    return 0;
}
