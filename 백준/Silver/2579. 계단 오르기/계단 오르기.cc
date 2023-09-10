#include <iostream>
#include <vector>

int main(int argc, char** argv) {
	int N; std::cin >> N;
	std::vector<int> arr(N), dp(N + 2, 0);
	for (int i = 0; i < N; i++) { std::cin >> arr[i]; }
	dp[0] = arr[0];
	dp[1] = arr[0] + arr[1];
	dp[2] = std::max(arr[0], arr[1]) + arr[2];
	for (int i = 3; i < N; i++) { dp[i] = std::max(dp[i - 3] + arr[i - 1], dp[i - 2]) + arr[i]; }
	std::cout << dp[N - 1];
return 0; }