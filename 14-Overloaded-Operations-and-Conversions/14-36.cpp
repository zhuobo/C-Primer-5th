#include <iostream>
#include <vector>
#include <string>

class PrintString {
public:
    std::string operator()(std::istream &is = std::cin) {
        std::string s;
        std::getline(is, s);
        if ( is ) {
            return s;
        }
        return std::string();
    }
};

int main() {
    PrintString p;
    std::vector<std::string> svec;
    for ( int i = 0; i < 10; ++i ) {
        svec.push_back(p());    
    }
    for ( const auto s : svec ) {
        std::cout << s << std::endl;
    }
    return 0;
}
