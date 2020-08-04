#include <iostream>
#include <string>
// 现在 HasPtr 的行为类似于指针，拷贝赋值指针成员不独立
class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr&);
    std::string *getPs() const;
    int getI() const;
    HasPtr& operator=(const HasPtr &other);
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
    ps = other.ps;
    i = other.i;
}

HasPtr& HasPtr::operator=(const HasPtr &other) {
    ps = other.ps;
    i = other.i;
    return *this;
}
int main() {
    HasPtr h1 = HasPtr("Hello World");
    HasPtr h2 = h1;
    HasPtr h3 = h2;
    // 地址一致
    std::cout << (h2.getPs()) << " " << h2.getI() << std::endl;
    std::cout << (h3.getPs()) << " " << h3.getI() << std::endl;
}
