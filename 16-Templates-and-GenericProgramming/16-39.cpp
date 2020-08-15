#include <iostream>
#include <string>

template<typename T1>
int compare(const T1 &v1, const T1 &v2) {
    if ( v1 < v2 ) return -1;
    else if ( v2 < v1 ) return 1;
    return 0;
}

int main() {
    std::cout << compare<std::string>("hello", "world");
    return 0;
}
