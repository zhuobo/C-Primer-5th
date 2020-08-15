# this 指针
C++ 的每一个对象都能通过 this 指针访问自己的地址，this 指针是所有成员函数的隐含参数，在成员函数的内部，可以用this执政调用对象。
友元函数没有 this 指针，友元不是类的成员，只有成员函数才有 this 指针。
```C++
#include <IOSTREAM>

class Line {
    public:
        Line();
        Line( double );
        Line( const Line& );
        double getLength();
        void setLength( double );
        bool compare( const Line &line );
    private:
        double length;
};

Line::Line(){}
Line::Line( double len ) : length(len) {}
Line::Line( const Line &otherLine ) : length(otherLine.length){}
double Line::getLength() {
    return length;
}
void Line::setLength( double len ) {
    length = len;
}
// using this pointer to visit member of the object.
bool Line::compare( const Line &otherLine ) {
    return this -> length > otherLine.length;
}

int main() {
    Line line1(2.1), line2(2.3);
    std::cout << line1.compare(line2) << std::endl;
    return 0;
}
```
