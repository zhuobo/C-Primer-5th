#include <iostream>
#include <list>
#include <deque>

int main() {
    std::list<std::deque<int> > IdequeList;
    std::deque<int> que1, que2;
    que1.push_back(1);
    que1.push_front(2);
    que2.push_back(3);
    que2.push_front(4);
    IdequeList.push_back(que1);
    IdequeList.push_front(que2);
    return 0;
}
