#include <iostream>
#include <string>

using std::string;
using std::cout; using std::endl;
// 希望类的行为像指针
class HasPtr {
public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0), use(new int(1)){}
    HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) {
        ++*use;
    } 
    HasPtr& operator=(const HasPtr &p);
    ~HasPtr();
private:
    string *ps;
    int i;
    int *use;
};

HasPtr& HasPtr::operator=(const HasPtr &p) {
   if ( this == &p ) {
       return *this;
   }
   ++*p.use;
   if ( --*use == 0 ) {
        delete ps;
        delete use;
   }
   ps = p.ps;
   i = p.i;
   use = p.use;
   return *this;
}

HasPtr::~HasPtr() {
    if ( --*use == 0 ) {
        delete ps;
        delete use;
        cout << "reference = 0" << std::endl;
    }
}

int main() {
    HasPtr p1("hello world");
    HasPtr p2(p1);
    HasPtr p3 = p2;
}
