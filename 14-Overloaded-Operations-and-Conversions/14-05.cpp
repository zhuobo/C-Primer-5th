#include <cctype>
#include <iostream>
#include <string>

class Book {
friend std::istream& operator>>(std::istream&, Book&);
friend std::ostream& operator<<(std::ostream&, const Book&);
friend bool operator==(const Book&, const Book&);
friend bool operator!=(const Book&, const Book&);

public:
    Book() = default;
    Book(const std::string &_name, const std::string _author, double _price) : name(_name), author(_author), price(_price){}
    Book(const Book&);
    Book(std::istream &is) {
        is >> *this;
    }
private:
    std::string name;
    std::string author;
    double price;
};


std::istream& operator>>(std::istream &is, Book &b) {
    is >> b.name >> b.author >> b.price;
    // 判断是否发生输入错误
    if ( !is ) {
        b = Book();
    } 
    return is;
}

std::ostream& operator<<(std::ostream &os, const Book &b) {
    os << b.name << " " << b.author << " " << b.price;
    return os;
}

bool operator==(const Book &b1, const Book &b2) {
    return (b1.name == b2.name && b1.author == b2.author && b1.price == b2.price);
}

bool operator!=(const Book &b1, const Book &b2) {
    // 直接使用 operator== 来定义 operator!=
    return !(b1 == b2);
}

Book::Book(const Book &b) : Book(b.name, b.author, b.price) {

}

int main() {
   Book b1("American People", "David", 18.22);
   Book b2(b1);
   std::cout << b1 << std::endl;
   std::cout << b2 << std::endl;
   Book b3;
   std::cin >> b3;
   std::cout << b3 << std::endl;
   std::cout << (b2 == b3) <<std::endl;
   std::cout << (b2 != b3) <<std::endl;


}
