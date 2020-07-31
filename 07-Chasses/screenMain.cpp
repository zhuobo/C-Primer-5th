#include <iostream>
#include "screen.h"

int main() {
    Screen myScreen;
    char ch = myScreen.get();
    std::cout << ch << std::endl;
    ch = myScreen.get(0, 0);
    std::cout << ch << std::endl;
}
