#include <iostream>
#include <string>

int main(int argc, char **argv) {
    std::string argvs;
    for ( int i = 1; i < argc; ++i ) {
        argvs += argv[i];
    }
    std::cout << argvs << std::endl;
}
