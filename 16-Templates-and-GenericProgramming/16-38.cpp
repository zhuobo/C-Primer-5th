#include <iostream>
#include <string>
#include <memory>

int main() {
    std::shared_ptr<int> p1 = std::make_shared<int>(1);
    std::shared_ptr<std::string> p2 = std::make_shared<std::string>(19, 'A');
}
/**
 * 这里可以看到 make_shared 函数是一个函数模板，在使用这个函数模板的时候需要提供显式
 * 模板实参，这是因为这个函数模板的模板实参没有被用在函数的形参中，而仅仅是用在了返回
 * 类型，无法通过传递的实参推断出来。
 */
