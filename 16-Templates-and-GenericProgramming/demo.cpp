#include <iostream>
#include <string>

template <typename T>

int compare(const T &v1, const T &v2) {
    if ( v1 < v2 ) return -1;
    else if ( v1 == v2 ) return 0;
    return 1;
}


int main() {
    std::cout << compare(1, 2) << std::endl;
    std::string s1 = "1235", s2 = "1234";
    std::cout << compare(s1, s2) << std::endl;
    
     
    int (*pf1)(const int&, const int &) = compare;
    std::cout << pf1(1, 3) << std::endl;

    // void func(int(*)(const std::string&, const std::string&));
    func(compare<int>);
    
    std::cout << func(s1, s2) << std::endl;

}

