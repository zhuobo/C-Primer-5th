#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

#include "textquery.h"
#include "queryresult.h"

TextQuery::TextQuery(std::ifstream &infile) : file(new std::vector<std::string>) {
    // 申请一块空间存储输入文件,按行存入 vector
    std::string text; // 每一行
    std::cout << "line" << std::endl;
    while ( getline(infile, text) ) {
        file->push_back(text); // store one line in the vectro
        int n = file->size() - 1; // n is the line number
        std::istringstream line(text);
        std::string word;
        while ( line >> word ) { // break the line into words
            auto &numbers = word_nums[word];
            if ( !numbers ) { // if the word occurs firstly
                numbers.reset(new std::set<int>);
            }
            numbers->insert(n);
        }
    }
}

QueryResult TextQuery::query(const std::string &sought) const {
    // when sought not found, return a empty line numbers
    static std::shared_ptr<std::set<int>> emptyNums(new std::set<int>());
    auto location = word_nums.find(sought);
    if ( location == word_nums.end()) {
        return QueryResult(sought, emptyNums, file);
    }
    return QueryResult(sought, location->second, file);
}
