#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <string>

int main() {
    std::vector<int> ivec = {1, 1024, 4444, 3, 2222, 3333, 4444, 1, 23,434, 34, 2344324, 2334, 2, 3424};
    // 统计大于 1024, bind1st 和 bind2nd 这两个适配器用于将二元算子转换为一元算子
    int count = std::count_if(ivec.cbegin(), ivec.cend(), std::bind2nd(std::less<int>(), 1024));
    std::cout << count << std::endl;
    
    std::vector<std::string> svec = {"pooh", "pooh", "pooh", "pooh", "hello"};
    // 找到第一个不等于 "pooh" 的字符串
    auto s = std::find_if(svec.cbegin(), svec.cend(), std::bind1st(std::not_equal_to<std::string>(), "pooh"));
    std::cout << *s << std::endl;

    // 将所有值乘以2
    // transform: 将指定范围内按照参数4转换放到参数3的位置
    std::transform(ivec.begin(), ivec.end(), ivec.begin(), std::bind2nd(std::multiplies<int>(), 2));
    for ( const auto i : ivec ) {
        std::cout << i << std::endl;
    }
}
