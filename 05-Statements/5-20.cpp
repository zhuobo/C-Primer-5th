#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string word, preWord;
    while ( cin >> word ) {
    	if ( word == preWord) {
	    cout << word << endl;
	    return 0;
	}
	preWord = word;
    }
    cout << "has no repeat" << endl;
    return 0;
}
