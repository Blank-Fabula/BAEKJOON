#include <iostream>

bool isPrime(long long&);
int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);
	int TC; std::cin >> TC;
	while (TC--) {
		long long N; std::cin >> N;
		for (; !isPrime(N); N++);
		std::cout << N << "\n";
	}
return 0; }

bool isPrime(long long& N) {
	if (N < 2) { return false; }
	for (long long i = 2; i * i <= N; i++) {
		if (N % i == 0) { return false; }
	}
return true; }