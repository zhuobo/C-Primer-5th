#include <iostream>
#include <string>
#include "quote.h"
#include "bulk_quote.h"
#include "disc_quote.h"

int main() {
    Quote q1("ISBN-20010904", 10.0);
    Bulk_quote bq1("ISBN-20020904", 10.0, 3, 0.2);
    Quote &q3 = bq1;
    Quote &q4 = q1;
    double q_due = q1.print_totol(std::cout, q1, 4);
    double bq_due = bq1.print_totol(std::cout, bq1, 4);
    double q3_due = q3.print_totol(std::cout, q3, 4);
    std::cout << q_due << " "<< bq_due << " " << q3_due<<  std::endl;
    std::cout << "===========" << std::endl;
    q3.debug();
    q4.debug();
}
