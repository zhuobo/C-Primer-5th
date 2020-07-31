#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> ivec;
    int num;
    while ( std::cin >> num ) {
        ivec.push_back(num);
    }
    int sum = std::accumulate(ivec.begin(), ivec.end(), 0);
    std::cout << "sum of vector is : " << sum << std::endl;
    return 0;
}
