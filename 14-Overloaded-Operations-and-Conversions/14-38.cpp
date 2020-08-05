#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class Sizecmp {
public:
    Sizecmp(size_t _t) : t(_t){}
    bool operator()(const std::string &s) {
        return s.size() == t;
    }
private:
    size_t t;
};

int main(int argc, char **argv){
    std::ifstream infile(argv[1]);
    if ( !infile ) {
        std::cout << "Open file failed!" << std::endl;
        exit(1);
    }
    std::vector<std::string> svec;
    std::string word;
    while ( infile >> word ) {
        svec.push_back(word);
    }
    for ( int i = 1; i <= 10; ++i ) {
        auto count1 = std::count_if(svec.begin(), svec.end(), Sizecmp(i));
        std::cout << "Size " << i << " --> " << count1 << std::endl;
    }
    infile.close();
}
