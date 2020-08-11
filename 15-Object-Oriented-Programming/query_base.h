#ifndef __QUERY_BASE__
#define __QUERY_BASE__
#include <string>
#include "queryresult.h"
#include "textquery.h"
#include "query.h"

class Query_basa {
    friend class Query;
protected:
    virtual ~Query_basa() = default;
private:
    virtual QueryResult eval(const TextQuery&) const = 0;
    virtual std::string rep() const = 0;
};

#endif
