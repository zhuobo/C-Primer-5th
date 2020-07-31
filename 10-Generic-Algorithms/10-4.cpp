#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> ivec;
    double num;
    while ( std::cin >> num ) {
        ivec.push_back(num);
    }
    double sum = std::accumulate(ivec.crbegin(), ivec.crend(), 0.0);
    std::cout << "sum of vector is : " << sum << std::endl;
    return 0;
}
