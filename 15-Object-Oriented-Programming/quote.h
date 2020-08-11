#ifndef __QUOTE_H__
#define __QUOTE_H__
#include <string>
#include <ostream>

class Quote{
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {}
    std::string isbn() const { return bookNo; }
    // 返回给定数量书籍的销售总额
    // 子类负责改写不同的折扣计算方法
    virtual double net_price(size_t n) const {
        return n * price;
    }
    virtual double print_totol(std::ostream &os, const Quote &item, size_t n) {
        double ret = item.net_price(n);
        os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
        return ret;
    }
    virtual void debug() {
        std::cout << "bookNo: " << bookNo << ", price: " <<price << std::endl; 
    }
    virtual ~Quote() = default;

private:
    std::string bookNo;
protected:
    double price = 0.0;
};

#endif
