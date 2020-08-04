#include <iostream>
#include <string>

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr&);
    std::string *getPs() const;
    int getI() const;
    HasPtr& operator=(const HasPtr &other);
    // 合成析构函数不会 delete 一个指针成员，
    // 因此要定义一个析构函数释放构造函数分配的内存
    ~HasPtr(){
        delete ps;
        ps = nullptr;
        std::cout << "Destructor" << std::endl;
    }
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
    ps = new std::string(*(other.ps));
    i = other.i;
    return *this;
}
int main() {
    HasPtr h1 = HasPtr("Hello World");
    HasPtr h2 = h1;
    HasPtr h3 = h2;
    std::cout << *(h2.getPs()) << " " << h2.getI() << std::endl;
    std::cout << *(h3.getPs()) << " " << h3.getI() << std::endl;
    
}
