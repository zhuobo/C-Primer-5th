#include <iostream>
#include "strBlog.h"

int main() {
    StrBlog b1;
    {
        // 这段代码结束之后, b2 将会被销毁,但是由于还有 b1 的成员( shared_ptr )指向共享的内存,因此空间不被回收.
        StrBlog b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        std::cout << b2.size() << std::endl;
    }
    std::cout << b1.size() << std::endl;
    // 输出 4 4
}
