#include <iostream>
#include <memory>

void process(std::shared_ptr<int> p) {
    return;
}
int main() {

    // 可以用内置指针直接初始化
    std::shared_ptr<int> p(new int(100));
    // 可以用reset,传参为普通指针或者智能指针改变指向的对象,如果传入智能指针,则参数会被 reset 置空
    p.reset(new int(99));
    std::cout << *p << std::endl;
    // 调用正确,这样在 process 中,引用计数为2
    // 这是因为这种值传递,传递的是p的拷贝,如此这个拷贝和 p 两个指针都指向同一个位置
    process(p);
    // 还是和上一题一样,传递了一个新的智能指针,引用计数还是1,因此导致空间被释放,还是UAF
    process(std::shared_ptr<int>(p.get()));
    int ival = *p;
}
