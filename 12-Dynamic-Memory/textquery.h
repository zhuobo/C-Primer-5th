#ifndef TEXTQUERY_H
#define TEXTQUERY_H
#include "queryresult.h"
#include <fstream>
#include <map>
#include <set>
#include <memory>
#include <string>
#include <iostream>
#include <vector>

class TextQuery {
public:
    TextQuery(std::ifstream &);
    QueryResult query(const std::string &) const;
private:
    // 使用共享指针的形式是为了 queryresult 可以访问
    std::map<std::string, std::shared_ptr<std::set<int>>> word_nums;
    std::shared_ptr<std::vector<std::string>> file; // 输入文件
};



#endif
