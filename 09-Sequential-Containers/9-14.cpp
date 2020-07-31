#include <list>
#include <vector>
#include <string>
#include <iostream>

int main() {
    const char *c1 = "abc", *c2 = "def", *c3 = "hijk";
    std::list<const char*> oldstyle = {c1, c2, c3};
    std::vector<std::string> svec;
    svec.assign(oldstyle.begin(), oldstyle.end());
    for( auto str : svec ) {
        std::cout << str << std::endl;
    }
}
