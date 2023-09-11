#include <iostream>

int main(int argc, char** argv) {
	int dp[31] = { 1, 0, 3 };
	int result = 0;
	int N; std::cin >> N;
	if (N % 2 == 0) {
		for (int i = 4; i <= N; i += 2) {
			dp[i] = 4 * dp[i - 2] - dp[i - 4];
		} result = dp[N];
	}
	std::cout << result;
return 0; }