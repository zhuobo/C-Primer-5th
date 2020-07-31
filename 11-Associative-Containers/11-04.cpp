#include <fstream>
#include <map>
#include <iostream>
#include <set>
#include <string>

using std::map; using std::set; using std::string;
using std::cin; using std::cout; using std::endl;

/* 需求:统计单词数量
 * 要求:忽略大小写和标点
 * */

void transform(string &word) {
    for ( int i = 0; i < word.size(); ++i ) {
        if ( word[i] >= 'a' && word[i] <= 'z' ) {
            word[i] += ('A' - 'a');
        }    
        else if ( word[i] ==  '.' || word[i] == ',' ) {
            word.erase(i, 1);
        } 
    }    
}

int main(int argc, char *argv[]) {
    map<string, size_t> word_count;
    std::ifstream infile(argv[1]);
    if ( !infile ) {
        cout << "[-]Open file fail!" << endl;
        exit(1);
    }
    string word;
    while ( infile >> word ) {
        transform(word);
        ++word_count[word];
    }
    for ( const auto &p : word_count ) {
        cout << p.first << "--" << p.second << endl;
    }
    return 0;
}
