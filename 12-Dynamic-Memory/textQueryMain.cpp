#include <iostream>
#include <fstream>
#include <string>
#include "textquery.h"
#include "queryresult.h"

using std::cin; using std::cout; using std::endl;
using std::ifstream; using std::string;
void runQuery(ifstream &infile) {
    // infile 是要处理的文件
    TextQuery tq(infile);
    while ( true ) {
        cout << "Enter the word you are looking for, or q to quit: ";
        string str;
        if ( !(cin >> str) || str == "q" ) break;
        print(cout, tq.query(str)) << endl;
    }
}

int main(int argc, char **argv) {
    ifstream is(argv[1]);
    if ( !is ) {
        cout << "Open file fail!" << endl;
        exit(1);
    }
    runQuery(is);
}
