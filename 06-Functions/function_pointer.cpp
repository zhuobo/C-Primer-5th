#include <iostream>
#include <string>

using std::string;
// 函数指针，定义一个指针，指向一个函数，指针也要有类型

bool lengthCompare(const string &, const string &);

int main() {
    // 定义了一个函数指针,该指针指向的函数参数列表如下,并且返回值是bool,如果去掉括号,则返回值是bool*
   bool (*fp)(const string &, const string &); 
   //fp = lengthCompare;
   fp = &lengthCompare;
   string str1 = "abcde", str2 = "abcd";
   bool flag =  fp(str1, str2);
   std::cout << flag << std::endl;
   return 0;
   
}

bool lengthCompare(const string &str1, const string &str2) {
    return str1.size() > str2.size();
}
