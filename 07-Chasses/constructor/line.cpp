#include "line.h"
#include <iostream>

Line::Line( void ) {
    std::cout << "Object Line is being created" << std::endl;    
}

Line::~Line() {
    std::cout << "Object line is being destroyed" << std::endl;
    delete ptr;
}

Line::Line( double len ) {
    std::cout << "constructor is being called" << std::endl;
    ptr = new double;
    *ptr = len;
}

Line::Line( const Line &obj ) {
    std::cout << " copy constructor is being called" << std::endl;
    ptr = new double;
    *ptr = *obj.ptr;
}

double Line::getLength( void ) {
    return *ptr;
}

void Line::setLength( double len ) {
    ptr = new double;
    *ptr = len;
}

