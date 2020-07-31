#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    std::ifstream infile;
    infile.open("./test.txt",std::ofstream::in);
    std::string line;
    std::vector<std::string> strv;
    while ( !infile.eof() ) {
        getline(infile, line);
        strv.push_back(line);
    }
    infile.close();
    for ( auto line : strv ) {
        std::cout << line << std::endl;
    }
    return 0;
}
