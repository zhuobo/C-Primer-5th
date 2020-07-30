#include <iostream>
#include <vector>

std::vector<int>* fun1() {
    std::vector<int> *p = new std::vector<int>();
    return p;
}

std::vector<int>* fun2(std::vector<int> *p) {
    int num;
    while ( std::cin >> num ) {
        p->push_back(num);
    }
    return p;
}

void fun3(std::vector<int> *p) {
    for ( const auto &num : *p ) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    delete p;
}

int main(){
   fun3(fun2(fun1())); 
   return 0;
}
