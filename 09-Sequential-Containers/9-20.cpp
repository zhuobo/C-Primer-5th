#include <iostream>
#include <deque>
#include <list>

int main() {
    std::list<int> ilst = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 3, 4, 12};
    std::deque<int> que1, que2;
    auto beg = ilst.begin(), end = ilst.end();
    while ( beg != end ) {
        if ( (*beg) % 2 == 0 ) {
            que1.push_back(*beg);
        }
        else {
            que2.push_back(*beg);
        }
        ++beg;
    }
    return 0;
}

