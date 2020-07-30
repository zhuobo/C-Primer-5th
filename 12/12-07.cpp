#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> fun1() {
    auto p = std::make_shared<std::vector<int>>();
    return p;
}

std::shared_ptr<std::vector<int>> fun2(std::shared_ptr<std::vector<int>> p) {
    int num;
    while ( std::cin >> num ) {
        p->push_back(num);
    }
    return p;
}

void fun3(std::shared_ptr<std::vector<int>> p) {
    for ( const auto &num : *p ) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main(){
   fun3(fun2(fun1())); 
   return 0;
}
