#include <iostream>
#include <vector>
#include <list>

int main() {
    std::vector<int> ivec1 = {1,3,4,5,9};
    std::list<int> ivec2(ivec1.begin(), ivec1.end());
    // ivec2.push_back(1);
    ivec2.pop_back();
    int i = 0;
    std::list<int>::iterator it = ivec2.begin();
    while ( i < ivec1.size() && it != ivec2.end() ) {
       if ( ivec1[i] == *it ) {
            ++i;
            ++it;
        }
        else if ( ivec1[i] > *(it) ) {
            std::cout << "ivec1 > ivec2" << std::endl;
            break;
        }
        else {
            std::cout << "ivec1 < ivec2" << std::endl;
            break;
        }
    }
    if ( i == ivec1.size() && it == ivec2.end() ) {
        std::cout << "ivec1 == ivec2" << std::endl;
    }
    else if ( i == ivec1.size() ) {
        std::cout << "ivec1 < ivec2" << std::endl;
    }
    else {
        std::cout << "ivec1 > ivec2" << std::endl;
    }
    return 0;
}
