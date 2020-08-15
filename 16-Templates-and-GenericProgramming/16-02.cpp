#include <iostream>
#include <string>

template <typename T> int compare(const T& v1, const T& v2) {
    if ( v1 < v2 ) return -1;
    else if ( v2 < v1 ) return 1;
    return 0;
}

int main() {
    std::string s1 = "asdf", s2 = "asdfg";
    int ival1 = 5, ival2 = 2;
    std::cout << compare(s1, s2) << std::endl;
    std::cout << compare(ival1, ival2) << std::endl;
}
