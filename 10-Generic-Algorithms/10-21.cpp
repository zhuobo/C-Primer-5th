// #include <iostream>

// int main() {
    // int num = 10;
    // auto f = [num]() -> bool { if (num == 0) return trujke; else {--num; return true;}};

// }

#include <iostream>
#include <algorithm>
  
using namespace std;
  
void mutable_lambda (void)
{
    int i = 5;
    auto f = [i] () mutable->bool { if (i> 0) { i--; return false;} else
            return true;};
    i = 0; 
    for (int j = 0;j < 6;j++) {
        cout << f() << " ";
        cout << endl;
    }
    // 输出 5 个 0 和 1 个 1
}  
int main (int argc, char *argv [])
{
    mutable_lambda();
      
    return 0;
}
