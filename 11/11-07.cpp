#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::map; using std::vector; using std::string;
using std::cout; using std::cin; using std::endl;

void addFimary(const string &fimaryName, map<string, vector<string>> &fimaryName_ChildrensNames) {
    vector<string> childrenNames;
    fimaryName_ChildrensNames[fimaryName] = childrenNames;
}

void addChildrenName(const string &fimaryName, const string &childrenName, map<string, vector<string>> &fimaryName_ChildrensNames) {
    fimaryName_ChildrensNames[fimaryName].push_back(childrenName);
}

int main() {
    map<string, vector<string>> fimaryName_ChildrensNames;
    string f1 = string("A"), f2 = string("B");
    vector<string> names1 = {"A1", "A2", "A3"}, names2 = {"B1", "B2", "B3", "B4"};
    addFimary(f1, fimaryName_ChildrensNames);
    addFimary(f2, fimaryName_ChildrensNames);
    for ( const auto name : names1 ) {
        addChildrenName(f1, name, fimaryName_ChildrensNames);
    }
    for ( const auto name : names2 ) {
        addChildrenName(f2, name, fimaryName_ChildrensNames);
    }
    for ( const auto &p : fimaryName_ChildrensNames ) {
        cout << p.first << "-->";
        for ( const auto &name : p.second ) {
            cout << name << ", ";
        }
        cout << endl;
    }
    return 0;
}


