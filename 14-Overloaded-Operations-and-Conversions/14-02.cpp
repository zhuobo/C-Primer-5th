#include <string>
#include <iostream>

class Sales_data {
friend std::istream& operator>>(std::istream&, Sales_data&);
friend std::ostream& operator<<(std::ostream&, const Sales_data&);
friend Sales_data operator+(const Sales_data&, const Sales_data&);

public:
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n*p){}
    Sales_data() : Sales_data("", 0, 0.0f){}
    Sales_data(const std::string &s) : Sales_data(s, 0, 0.0f){}
    Sales_data(std::istream &is);
    
    Sales_data& operator+=(const Sales_data&);
    std::string isbn() const { return bookNo; }

private:
    inline double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


double Sales_data::avg_price() const {
    return units_sold ? revenue / units_sold : 0;
}

Sales_data::Sales_data(std::istream &is) : Sales_data() {
    is >> *this;
}

Sales_data& Sales_data::operator+=(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

std::istream& operator>>(std::istream &is, Sales_data &item) {
    double price = 0.0;
    // 输入输入
    is >> item.bookNo >> item.units_sold >> price;
    if ( is ) {
        // 判断是否输入成功
        item.revenue = price * item.units_sold;
    }
    else {
        // 否则就默认初始化
        item = Sales_data();
    }
    // 返回流的引用
    return is;
}

std::ostream& operator<<(std::ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum += rhs;
    return sum;
}

int main() {
    Sales_data s1, s2;
    std::cin >> s1 >> s2;
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    Sales_data s3 = s1 + s2;
    std::cout << s3 << std::endl;
    s1 += s2;
    std::cout << s1 << std::endl;
}
