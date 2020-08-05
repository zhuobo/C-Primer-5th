#include <iostream>
#include <algorithm>
#include <vector>

class isEqual {
public:
    isEqual(int x):val(x){}// 形参 x 相当于 lambda 捕获的变量
    bool operator()(int x) {
        return x == val; 
    }
private:
    int val;
};

int main() {
    std::vector<int> ivec = {1, 2, 3, 4, 5, 6, 1, 2, 4, 5, 6, 1, 2, 1, 1, 3, 1};
    std::replace_if(ivec.begin(), ivec.end(), isEqual(1), 9999);
    for ( const auto i : ivec ) {
        std::cout << i << " ";
    }
}
