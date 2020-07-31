#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include <map>

using std::list; using std::string; using std::map;

int main(int argc, char *argv[]) {
    std::ifstream infile("11-09.txt");
    if ( !infile ) {
        std::cout << "[-] Open file failed!" << std::endl;
        exit(1);
    }
    int line_num = 1;
    string word;
    map<string, list<int>> word_lineNum;
    while ( infile >> word ) {
        if ( word_lineNum.find(word) == word_lineNum.end() ) {
            list<int> line_nums = {line_num};
            word_lineNum[word] = line_nums;
        } 
        else {
            word_lineNum[word].push_back(line_num);
        }
        ++line_num;
    }
    infile.close();
    for ( const auto &p : word_lineNum ) {
        std::cout << p.first << "-->";
        for ( const auto &num : p.second ) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
