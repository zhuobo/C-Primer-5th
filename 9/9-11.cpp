#include <vector>

int main() {
    // 6种初始化方式
    std::vector<int> ivec1;
    std::vector<int> ivec2(ivec1.begin(), ivec1.end());
    std::vector<int> ivec3(10);
    std::vector<int> ivec4(10, 1);
    std::vector<int> ivec5{1,2,3,4,5};
    std::vector<int> ivec6 = ivec5;
}
