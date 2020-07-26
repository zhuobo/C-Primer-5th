#include <iostream>

class Box {
    double width;
    public:
        friend void printWidth( Box box );
        void setWidth( double wid );
};

void Box::setWidth( double wid ) {
    width = wid;
}

// printWidth函数不是成员函数，是友元
void printWidth( Box box ) {
    // 友元函数可以直接调用 private 成员
    std::cout << "Width of box is " << box.width << std::endl;
}

int main() {
    Box box;
    box.setWidth(11.11);
    // using friend function
    printWidth(box);
    return 0;
}
