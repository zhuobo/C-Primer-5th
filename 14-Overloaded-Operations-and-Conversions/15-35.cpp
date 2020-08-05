#include <iostream>
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
    std::cout << p() << std::endl;

}
