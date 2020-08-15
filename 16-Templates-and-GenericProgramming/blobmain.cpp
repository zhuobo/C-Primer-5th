#include <iostream>
#include "blob.h"

int main() {
    Blob<int> ia;
    ia.push_back(1);
    ia.push_back(2);
    std::cout << ia.size() << std::endl;
    Blob<int> ib = {
        1, 2, 3, 4, 5, 6, 6
    };
    std::cout << ib.size() << std::endl;
    std::cout << ib[2] << std::endl;

}
