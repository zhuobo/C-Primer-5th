#include <iostream>
#include "person.h"
#include <string>

int main() {
    Person p1("Alice", "BeiJing", 18);
    Person p2;
    Person p3(p1);

    std::cout << p1.getName() << " " << p1.getAddress() << " " << p1.getAge() << std::endl;
    std::cout << p2.getName() << " " << p2.getAddress() << " " << p2.getAge() << std::endl;
    std::cout << p3.getName() << " " << p3.getAddress() << " " << p3.getAge() << std::endl;
    std::ostream &os = std::cout;
    std::istream &is = std::cin;
    read(is, p2);
    print(os, p2) << std::endl;
    Person p4(is);
    print(os, p4) << std::endl;
    
}
