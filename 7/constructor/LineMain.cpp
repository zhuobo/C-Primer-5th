#include "line.h"
#include <iostream>

int main() {
    Line line1;
    Line line2(3.5);
    line1.setLength(3.0);
    std::cout << "Length of the line1 is " << line1.getLength() << std::endl;
    std::cout << "Length of the line2 is " << line2.getLength() << std::endl;
    Line line3(line1);
    std::cout << "Length of the line3 is " << line3.getLength() << std::endl;
    Line line4 = line2;
    std::cout << "Length of the line4 is " << line4.getLength() << std::endl;
    return 0;
}
