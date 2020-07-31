#include <iostream>
#include <memory>
#include <string>
#include <vector>

int main() {
    // 拥有分配 string 对象的能力的 allocator
    std::allocator<std::string> alloc;
    // 分配 10 个 string 对象的空间,都没有构造,单纯的内存空间
    auto const p = alloc.allocate(10);
    // q 用来指向最后构造的元素之后的位置
    auto q = p;
    alloc.construct(q++); // 构造一个空字符串
    alloc.construct(q++, 99, 'W'); // 构造 99 个 'W' 的字符串
    alloc.construct(q++, "hello world"); // 构造一个 "hello world";

    for ( auto cur = p; cur != q; ++cur ) {
        std::cout << *cur << std::endl;
    }
    
    // 从后往前析构对象,但是并不回收空间.
    while ( q != p ) {
        alloc.destroy(--q);
    }
    
    alloc.deallocate(p, 10);
    // p = nullptr;
    q = nullptr;
    
    std::vector<int> ivec;
    int num;
    while ( std::cin >> num ) {
        ivec.push_back(num);
    }
    std::allocator<int> ialloc;
    auto const ip = ialloc.allocate(ivec.size() * 2);
    auto iq = std::uninitialized_copy(ivec.begin(), ivec.end(), ip);
    std::uninitialized_fill_n(iq, ivec.size(), 99);
    
    // iq = ip;
    for ( auto i = 0; i < ivec.size() * 2; ++i ) {
        std::cout << *(ip + i) << std::endl;
  }
}
