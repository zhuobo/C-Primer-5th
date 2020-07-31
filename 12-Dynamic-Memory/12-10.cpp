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
    // 也是合法的调用,但是 process 结束后,内存会被释放
    // 这是因为这种调用时创建一个临时的智能指针,而这个指针也指向p所指向的位置,但是引用计数为1
    // 他们之间除了指向同一个位置之外没有其他关联,因此 process 结束之后这块空间被释放,导致
    // p 变成一个野指针(指向已经被释放的空间,可能引发UAF)
    process(std::shared_ptr<int>(p));
    // 现在p指向的空间已经被释放了,事实上就是UAF
    int ival = *p;
}
