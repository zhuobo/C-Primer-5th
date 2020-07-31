#include <map>
#include <iostream>
#include <set>
#include <string>

using std::map; using std::set; using std::string;
using std::cin; using std::cout;
int main() {
    map<string, size_t> word_count;
    string str;
    const set<string> exclude = {"of", "Of", "a", "A", "An", "an", "if", "If", "but", "But", "and", "And", "or", "Or"};
    while ( cin >> str ) {
       if ( exclude.find(str) == exclude.end() ) {
            ++word_count[str];
       } 
    }
    for ( const auto &w : word_count ) {
        std::cout << w.first << " : " << w.second << std::endl;
    }
    return 0;
}
