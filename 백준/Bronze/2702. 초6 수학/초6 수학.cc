#include <iostream>
#include <numeric>

int main(int argc, char* argv[]) {
    int testCase; std::cin >> testCase;
    while (testCase--) {
        int numA, numB; std::cin >> numA >> numB;
        std::cout << std::lcm(numA, numB) << " ";
        std::cout << std::gcd(numA, numB) << "\n";
    }
return 0; }