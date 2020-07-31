#include <iostream>
#include <string>


bool isSeparate(char c) {
    std::string separates = {'.', '?', '!', ',', '\"', '-', '/'};
    int i = 0;
    while ( i < separates.size() ) {
        if ( separates[i] == c) {
            return true;
        }
        i++;
    }
    return false;
}

int countWords(std::string s) {
    int len = s.size();
    int count = 0;
    for ( int i = 0; i < len; i++ ) {
        if ( (i == 0 || isSeparate( s[i - 1])) && !isSeparate(s[i]) ) {
            count++;
        }
    }
    std::cout << s << "--" << count << std::endl;
    return count;
}

int main() {
    std::string input;
    int    count = 0;
    while ( std::cin >> input ) {
        count += countWords(input);
    }
    std::cout << count << std::endl;
    return 0;
}