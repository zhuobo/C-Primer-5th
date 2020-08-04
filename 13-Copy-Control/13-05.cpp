#include <iostream>
#include <string>

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr&);
    std::string *getPs() const;
    int getI() const;
private:
    std::string *ps;
    int i;
};

std::string* HasPtr::getPs() const {
    return ps;
}

int HasPtr::getI() const {
    return i;
} 

HasPtr::HasPtr(const HasPtr &other) {
    ps = new std::string(*(other.ps));
    i = other.i;
}

int main() {
    HasPtr h1 = HasPtr("Hello World");
    HasPtr h2 = h1;
    std::cout << *(h2.getPs()) << " " << h2.getI() << std::endl;
}
