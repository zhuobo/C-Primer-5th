#include <iostream>
#include <string>


using std::string;
using std::cout; using std::cin; using std::endl;

int main() {
    string word, preWord, maxWord;
    int maxCount = 0, count = 0;
    while ( cin >> word ) {
        if ( word == preWord ) {
            ++count;
            if ( count > maxCount ) {
                maxCount = count;
                maxWord = word;
            }
        }
        else {
            count = 1;
        }
        preWord = word;
    }
    cout << maxWord << " --> " << maxCount << endl;
    return 0;
} 