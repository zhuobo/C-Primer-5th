#include <iostream>
#include "Box.h"
#include "SmallBox.h"

int main() {
    Box box1, box2;
    double volume = 0.0;

    box1.setHeight(1);
    box1.setLength(2);
    box1.setBreadth(3);
    volume = box1.getVolume();
    std::cout << "Volume of box1 is " << volume << std::endl;
    std::cout << "Height is " << box1.getHeight() << std::endl;
    std::cout << "Breadth is " << box1.getBreadth() << std::endl;
    std::cout << "Length is " << box1.getLength() << std::endl;

    return 0;
}
