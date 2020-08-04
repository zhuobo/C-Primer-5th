#include <iostream>
#include <string>

class Employee {
static unsigned int curId;
public:
    Employee();
    Employee(const std::string&);
    Employee(const Employee&);
    Employee& operator=(const Employee&);
    std::string getName() const;
    void setName(const std::string&);
    unsigned int getId() const;
private:
    unsigned int id;
    std::string name;
};

unsigned int Employee::curId = 0;
Employee::Employee() : id(curId++), name("UnNamed"){ }
Employee::Employee(const std::string &str) : id(curId++), name(str){ }
Employee::Employee(const Employee &e) : id(curId++), name(e.name){}
std::string Employee::getName() const {
    return name;
}
void Employee::setName(const std::string &str) {
    name = str;
}
unsigned int Employee::getId() const {
    return id;
}
Employee& Employee::operator=(const Employee &e) {
    id = curId++;
    name = e.name;
    return *this;
}
int main () {
    Employee e1;
    Employee e2("Alice");
    Employee e3 = e2;
    std::cout << e1.getId() << "--" << e1.getName() << std::endl;
    std::cout << e2.getId() << "--" << e2.getName() << std::endl;
    std::cout << e3.getId() << "--" << e3.getName() << std::endl;
    return 0;
}
