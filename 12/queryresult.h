#ifndef QUERYRESULT_H
#define QUERYRESULT_H
#include <fstream>
#include <iostream>
#include <map>
#include <ostream>
#include <set>
#include <memory>
#include <string>
#include <vector>

#include "textquery.h"
#include "queryresult.h"


class QueryResult {
friend std::ostream& print(std::ostream &, const QueryResult&);
public:
    QueryResult(std::string str, std::shared_ptr<std::set<int>> p, std::shared_ptr<std::vector<std::string>> f) : sought(str), nums(p), file(f) { }    
private:
    std::string sought;
    std::shared_ptr<std::set<int>> nums;
    std::shared_ptr<std::vector<std::string>> file;
};
#endif
