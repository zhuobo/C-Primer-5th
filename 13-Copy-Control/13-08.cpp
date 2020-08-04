#include <iostream>
#include <string>

class HasPtr {
friend void swap(HasPtr &p1, HasPtr &p2);
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr&);
    std::string *getPs() const;
    int getI() const;
    HasPtr& operator=(const HasPtr &other);
    ~HasPtr();
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

HasPtr& HasPtr::operator=(const HasPtr &other) {
    // 这里要保证自己 = 自己 可以正常工作
    // 应该先拷贝到一个临时变量
    // 而不是一上来就 delete 原来的成员
    // 否则造成从被 delete 的成员复制数据
    std::string *newPs = new std::string(*other.ps);
    delete ps;
    ps = newPs;
    i = other.i;
    return *this;
}

HasPtr::~HasPtr(){
    delete ps;
}

inline void swap(HasPtr &p1, HasPtr &p2) {
    using std::swap;
    swap(p1.ps, p2.ps);
    swap(p1.i, p2.i);
}

int main() {
    HasPtr h1 = HasPtr("Hello World");
    HasPtr h2 = h1;
    HasPtr h3 = h2;
    h3 = h3;
    // 类似于值得拷贝,地址不同
    std::cout << (h2.getPs()) << " " << h2.getI() << std::endl;
    std::cout << (h3.getPs()) << " " << h3.getI() << std::endl;
    std::cout << (h1.getPs()) << " " << h1.getI() << std::endl;
    
}
