#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

bool all_mod_by(int val, std::vector<int> ivec) {
    // 如果找到找被val mod 不等于0,说明有数字不被val整除,返回false
    if ( std::find_if(ivec.begin(), ivec.end(), bind2nd(std::modulus<int>(), val)) != ivec.end()){
        return false;
    }
    // 否咋找不到
    return true;
}

int main() {
    std::vector<int> ivec = {3, 6, 9, 21, 24, 27};
    std::cout << all_mod_by(3, ivec) << std::endl;

}
