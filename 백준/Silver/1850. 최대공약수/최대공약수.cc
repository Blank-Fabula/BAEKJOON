#include <iostream>
#include <numeric>

int main(int argc, char* argv[]) {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
	long long numA, numB; std::cin >> numA >> numB;
	int cnt = std::gcd(numA, numB);
	for (int i = 0; i < cnt; i++) { std::cout << 1; }
return 0; }