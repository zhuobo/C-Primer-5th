#include <iostream>
#include <string.h>
#include <string>

int main() {
    char s1[7] = "hello ";
    char s2[6] = "world";
    // 这就是个字符数组!,数组要写好大小
    char s3[20];
    strcat(s3, s1);
    strcat(s3, s2);
    std::cout << s3 << std::endl;
    // 存储 s3 到动态 char 数组中
    char *p1 = new char[len];
    for ( auto i = 0; i < len; ++i ) {
        *(p1 + i) = s3[i];
    }
    for ( auto i = 0; i < len; ++i ) {
        std::cout << *(p1 + i);
    }
    delete [] p1;
    std::cout << std::endl << "-------------" << std::endl;

    std::string str1 = "HELLO ", str2 = "WORLD";
    std::string str3 = str1 + str2;
    std::cout << str3 << std::endl;
    char *p2 = new char[str3.size()];
    for ( auto i = 0; i < len; ++i ) {
        *(p2 + i) = str3[i];
    }
    for ( auto i = 0; i < len; ++i ) {
        std::cout << *(p2 + i);
    }
    delete [] p2;
}
