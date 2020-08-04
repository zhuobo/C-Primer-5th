#include <iostream>
#include "folder.h"
#include "message.h"

int main() {
    Message m1("m1");
    Message m2("m2");
    Message m3("m3");
    Message m4("m4");

    Folder f1;
    Folder f2;

    m1.save(f1);
    m1.save(f2);
    m2.save(f2);
    m3.save(f1);
    m4.save(f2);
    
    std::cout << m1.getContents();
    std::cout << m1.getFolders().size();

}
