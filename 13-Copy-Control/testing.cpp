#include <iostream>
#include <vector>

class A {
    public:
        A();
        void PrintIvec() const; 
    private:
        std::vector<int> ivec;
};

A::A() {
    ivec.push_back(1);
    ivec.push_back(2);
    ivec.push_back(3);
}

void A::PrintIvec() const {
    for ( auto num : ivec ) {
        std::cout << num << " ";
    }
}

int main() {
    A a;
    A b(a); // 没有定义拷贝构造函数,但是会默认合成拷贝构造函数
    a.PrintIvec();
    b.PrintIvec();
}

