#include <iostream>
#include <string>
#include <vector>
using std::vector; using std::string;

int main() {
    vector<vector<int> > ivec;
    // vector<string> svec = ivec;
    vector<string> svec(10, "null");
    vector<string> v1{10};
    std::cout << v1.size();
}