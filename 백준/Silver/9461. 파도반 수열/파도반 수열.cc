#include <iostream>
typedef long long ll;

int main(int argc, char* argv[]) {
	ll dp[100] = { 1, 1, 1 };
	for (int idx = 3; idx < 100; idx++) {
		dp[idx] = dp[idx - 2] + dp[idx - 3];
	}
	int testCase; std::cin >> testCase;
	while (testCase--) {
		int N; std::cin >> N;
		std::cout << dp[N - 1] << "\n";
	}
return 0; }