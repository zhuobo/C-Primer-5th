#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// 以文件名作为参数,按行读取
int main(int argc, char **argv) {
    std::ifstream infile;
    infile.open(argv[1], std::ofstream::in);
    std::string line;
    std::vector<std::string> strv;
    /*
    while ( !infile.eof() ) {
        getline(infile, line);
        strv.push_back(line);
    }
    */
    
    std::string word;
    std::vector<std::string> wordv;
    while ( infile >> word ) {
        wordv.push_back(word);
    }

    for ( auto word : wordv ) {

        std::cout << word << std::endl;
    }
    infile.close();
    for ( auto line : strv ) {
        std::cout << line << std::endl;
    }
    return 0;
}
