#include <set>

int main() {
    std::set<int> iset = {1, 2, 3, 4, 5, 6, 1 , 3, 4, 5, 3};
    std::set<int>::iterator set_it = iset.begin();
    while ( set_it != iset.end() ) {
        // set 的迭代器是const的
        *set_it = 99;
        ++set_it;
    }
}
