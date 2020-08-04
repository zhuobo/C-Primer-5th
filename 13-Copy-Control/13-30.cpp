#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


class HasPtr {
friend void swap(HasPtr &p1, HasPtr &p2);
public:
    HasPtr(const std::string &s = std::string(), int _i = 0) : ps(new std::string(s)), i(_i) { }
    HasPtr(const HasPtr&);
    std::string *getPs() const;
    int getI() const;
    HasPtr& operator=(const HasPtr &other);
    bool operator<(const HasPtr &other);
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

bool HasPtr::operator<(const HasPtr &other) {
    return i < other.i;
}

HasPtr::~HasPtr(){
    delete ps;
}

inline void swap(HasPtr &p1, HasPtr &p2) {
    std::cout << "swap" << std::endl;
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
    std::cout << "h2" << (h2.getPs()) << " " << h2.getI() << std::endl;
    std::cout << "h3" << (h3.getPs()) << " " << h3.getI() << std::endl;
    std::cout << "h1" <<  (h1.getPs()) << " " << h1.getI() << std::endl;
    swap(h1, h2);
    std::cout << "h2" << (h2.getPs()) << " " << h2.getI() << std::endl;
    std::cout << "h1" << (h1.getPs()) << " " << h1.getI() << std::endl;

    HasPtr p1("p1", 4);
    HasPtr p2("p2", 8);
    HasPtr p3("p3", 1);
    HasPtr p4("p4", 3);
    HasPtr p5("p5", 8);
    HasPtr p6("p6", 0);
    HasPtr p7("p7", 1);
    std::vector<HasPtr> hvec = {p1, p2, p3, p4, p5, p6, p7};
    // 定义了<运算符,可以供sort使用.
    std::sort(hvec.begin(), hvec.end());
    // 如果不提供小于号运算符,可以提供一个可调用对象
    // std::sort(hvec.begin(), hvec.end(), [](const HasPtr &p1, const HasPtr &p2){
            // return p1.getI() < p2.getI();
            // });
    for ( const auto p : hvec ) {
        std::cout << p.getI() << std::endl;
    }


}
