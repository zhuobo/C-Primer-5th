#ifndef __QUERY_H__
#define __QUERY_H__

#include <string>
#include <memory>
#include "queryresult.h"
#include "query_base.h"

class Query {
    friend Query operator~(const Query &);
    friend Query operator|(const Query&, const Query&);
    friend Query operator&(const Query&, const Query&);

public:
    Query(const std::string&);
    QueryResult eval(const TextQuery &t) const {
        return q->eval(t);
    }
    std::string rep() const {
        return q->rep();
    }
private:
    Query(std::shared_ptr<Query_basa> query) : q(query) { }
    std::shared_ptr<Query_basa> q;
};

#endif
