#include <iostream>
using namespace std;

// 传指针也是传值,形参指针和实参指针是两个不同的指针
// 只是通过指针可以间接修改指向的内容
void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
    // 这是甚至修改a, b也没有问题
    a = 0;
    b = 0;
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
