#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
    public:
        Person();
        Person(std::string name, std::string address, int age);
        Person(const Person &otherPerson);
        Person(std::istream &is);
        void setName(std::string otherName);
        std::string getName() const;
        void setAddress(std::string otherAddress);
        std::string getAddress() const;
        void setAge(int otherAget);
        int getAge() const;
    private:
        std::string name;
        std::string address;
        int age;
};

// function relatived to Person
/*
 * description: input object person, name, address , age
 */
std::istream &read(std::istream &is, Person &person);

std::ostream &print(std::ostream &os, const Person &person);

#endif
