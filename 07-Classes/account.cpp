#include <iostream>
#include <string>

class Account {
public:
    void claculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);
private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
};

// 定义并初始化一个静态成员
double Account::interestRate = initRate();

// static 只能再类中生命,在定义函数的时候不能重复使用 static 关键字.
void Account::rate(double newRate) {
    interestRate = newRate;
}

double Account::initRate() {
    interestRate = 1;
    return interestRate;
}

int main() {
   Account a1, a2;
   std::cout << a1.rate() << std::endl;
   std::cout << a2.rate() << std::endl;
   a1.rate(1.4);
   std::cout << a1.rate() << std::endl;
   std::cout << a2.rate() << std::endl;
   return 0;
}
