#include <iostream>

class Numbered {
// 
static int curNum;
public:
Numbered() {
    mysn = curNum++;
}

Numbered(const Numbered &n) {
    mysn = curNum++;
}

Numbered& operator=(const Numbered &n) {
    mysn = curNum++;
    return *this;
}
int mysn;
};

int Numbered::curNum = 0;

void fun(Numbered s) {
    std::cout << s.mysn << std::endl;
}

int main() {
    Numbered a, b = a, c = b;
    fun(a);
    fun(b);
    fun(c);
    // 如果使用默认的拷贝、赋值，那么这里会直接输出三个0，因为合成的赋值操作会将序号直接赋予目的对象
    // 如果使用上面自定义的拷贝、赋值，那么这里输出3， 4， 5，因为 fun 函数使用的是非引用传递，也会导致对象的拷贝
    // 如果使用引用传递就可以减少三次实参到形参传递的拷贝
}
