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

    std::string make_plural(size_t ctr,const std::string &word, const std::string &ending) {
            return (ctr==1) ? word : word+ending;
        }

std::ostream &print(std::ostream &os, const QueryResult &qr) {
    os << qr.sought << " occurs " << qr.nums->size() << " " << make_plural(qr.nums->size(), "time", "s") << std::endl;
    for ( auto num : *qr.nums ) {
        os << "\t(line " << num + 1 << " )" << *(qr.file->begin() + num) << std::endl;
    } 
    return os;
}


