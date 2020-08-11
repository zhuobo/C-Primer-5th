#ifndef __DISC_QUOTE_h__
#define __DISC_QUOTE_h__

#include "quote.h"
#include <string>


class Disc_quote : public Quote {
public:
    Disc_quote() = default;
    Disc_quote(const std::string &book, double price, size_t qty, double disc) : Quote(book, price), quantity(qty), discount(disc) {}
    // 声明为纯虚函数
    double net_price (size_t) const = 0;
protected:
    size_t quantity = 0;
    double discount = 0.0;
};



#endif

