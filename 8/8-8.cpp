#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    // 读一个文件,并写到另一个文件
    std::ifstream infile;
    std::ofstream outfile;
    infile.open(argv[1], std::ifstream::in);
    outfile.open(argv[2], std::ofstream::app);
    std::string line;
    while ( !infile.eof() ) {
        getline(infile, line);
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}
