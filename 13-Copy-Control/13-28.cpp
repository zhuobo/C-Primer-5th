#include <iostream>
#include <string>

class TreeNode {
public:
    TreeNode(const std::string &s = std::string()) : value(s),count(0), left(nullptr), right(nullptr){ }
    TreeNode(const TreeNode &t) : value(std::string(t.value)), count(t.count), left(t.left), right(t.right) {}
    TreeNode& operator=(const TreeNode&);
    ~TreeNode() = default;
private:
    std::string value;
    int count;
    TreeNode *left;
    TreeNode *right;
};

TreeNode& TreeNode::operator=(const TreeNode &t) {
    if ( this == &t ) {
        return *this;
    } 
    value = t.value;
    count = t.count;
    left = t.left;
    right = right;
    return *this;
}

class BinStrTree{

private:
    TreeNode *root;
};

int main() {
    TreeNode node1("hello world");
    TreeNode node2(node1);
    TreeNode node3 = node2;
}

