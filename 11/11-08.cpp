#include <iostream>
#include <vector>
#include <string>

using std::vector; using std::string;
using std::cin; using std::cout; using std::endl;

bool findWord(const vector<string> &words, const string &word) {
    for ( const auto str : words ) {
        if ( str == word ) {
            return true;
        }
    }
    return false;
}

int main() {
    // 保存不重复的单词
    vector<string> words;
    string word;
    while ( cin >> word ) {
        if ( !findWord(words, word) ) {
            words.emplace_back(word);
        }
    }
    for ( const auto str : words ) {
        cout << str << endl;
    }
    return 0;
}
