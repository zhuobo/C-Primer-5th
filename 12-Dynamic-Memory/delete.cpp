#include <new>
int main() {
    int *ip = new (std::nothrow) int();
    delete ip;
    int *p = nullptr;
    delete p;
}
