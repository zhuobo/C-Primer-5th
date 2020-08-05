#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Sizecmp {
public:
    Sizecmp(size_t _t) : t(_t){}
    bool operator()(const std::string &s) {
        return s.size() >= t;
    }
private:
    size_t t;
};

int main(){
    std::vector<std::string> svec;
    svec.push_back("asdf");
    svec.push_back("asdfasdf");
    svec.push_back("asdfasdfasdfa");
    svec.push_back("asdfasdf");
    svec.push_back("asdf");
    svec.push_back("asdf");
    svec.push_back("asdf");

    auto wc = std::find_if(svec.begin(), svec.end(), Sizecmp(10));
    std::cout << *wc << std::endl;
}
