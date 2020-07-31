#include <iostream>

// 类的声明,先不用实现,因为后面X需要Y作为一种类型,所以可以先声明再实现.
class Y;

struct X {
    Y *ptr;
};

struct Y {
    X x;
};

int main() {
    X x;
    Y y;
    Y *ptr = &y;

    x.ptr = ptr;
    y.x = x;
}
