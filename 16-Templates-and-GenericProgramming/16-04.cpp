#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

template <typename T1, typename T2> inline T1 myfind(T1 beg, const T1 &end, const T2 &val) {
    for ( ; beg != end; ++beg ) {
        if ( *beg == val ) return beg;
    }
    return end;
}

int main() {
    std::vector<int> ivec = {1, 2, 3, 4, 5, 5, 2, 9, 10};
    std::list<std::string> slst = {"1", "asdf", "jj", "asdf", "jjl;jk"};
    if ( myfind(ivec.begin(), ivec.end(), 9) != ivec.end() ) {
        std::cout << *myfind(ivec.begin(), ivec.end(), 9) << std::endl;
    }
    if ( myfind(slst.begin(), slst.end(), "jj") != slst.end() ) {
        std::cout << *myfind(slst.begin(), slst.end(), "jj") << std::endl;
    }
}
