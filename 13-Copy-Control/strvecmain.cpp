#include <iostream>
#include <algorithm>
#include <string>
#include <memory>
#include <utility>
#include "strvec.h"

int main() {
    Strvec s1;
    std::string str1("hello"), str2("world"), str3("you");
    s1.push_back(str1);
    s1.push_back(str2);
    s1.push_back(str3);
    std::cout << *(s1.begin()) << std::endl;
    std::cout << s1.size() << std::endl;
}
