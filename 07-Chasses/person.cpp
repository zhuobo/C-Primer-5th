#include "person.h"
#include <iostream>
#include <string>

Person::Person() {
    name = "empty name";
    address = "empty address";
    age = 0;
}

Person::Person(std::string otherName, std::string otherAddress, int otherAge):name(otherName), address(otherAddress), age(otherAge) {}

Person::Person(const Person &otherPerson) {
    name = otherPerson.name;
    address = otherPerson.address;
    age = otherPerson.age;
}

Person::Person(std::istream &is) {
    read(is, *this);
}

void Person::setName(std::string otherName) { name = otherName; }

std::string Person::getName() const { return name; }

void Person::setAddress(std::string otherAddress) { address = otherAddress; }

std::string Person::getAddress() const { return address; }

void Person::setAge(int otherAge) { age = otherAge; }

int Person::getAge() const { return age; }


std::istream &read(std::istream &is, Person &person) {
    std::string name;
    std::string address;
    int age;
    is >> name >> address >> age;
    person.setName(name);
    person.setAddress(address);
    person.setAge(age);
    return is;
}

std::ostream &print(std::ostream &os, const Person &person) {
    os << person.getName() << " " << person.getAddress() << " " << person.getAge();
    return os;
}
