#ifndef __BULK_QUOTE_H__
#define __BULK_QUOTE_H__
#include <iostream>
#include <string>
#include "quote.h"
#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string&, double, size_t, double);
    double net_price(size_t) const override;
    void debug() override {
        Quote::debug();
        std::cout << "min_qty: " << min_qty << ", discount: " << discount << std::endl;
    }
private:
    size_t min_qty = 0; // 可以使用折扣的最低购买数量
    double discount = 0.0;
};

Bulk_quote::Bulk_quote(const std::string &s, double p, size_t n, double d) : Disc_quote(s, p, n, d){}

double Bulk_quote::net_price(size_t n) const {
    if ( n >= min_qty ) {
        return n * (1 - discount) * price;
    }
    return n * price;
}
#endif
