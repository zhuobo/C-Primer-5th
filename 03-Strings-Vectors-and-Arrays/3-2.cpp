#include <iostream>
using std::cin; using std::cout; using std::string;

int main() {
    string line;
    while ( getline(cin, line) ) {
        cout << line << std::endl;
    }
    // while ( cin >> line ) {
    //     cout << line << std::endl;
    // }
    // getline：读入一行，直到遇到回车符号，但是字符串不包括回车符号
    // cin: 读入一个单词，直到遇到空白字符，空格，回车，制表符等都是空白字符
}