#include <iostream>
typedef long long ll;

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
	ll dp[100] = { 1, 1, 1 };
	for (int idx = 3; idx < 100; idx++) {
		dp[idx] = dp[idx - 2] + dp[idx - 3];
	}
	int testCase; std::cin >> testCase;
	for (int num; testCase--; ) {
        std::cin >> num;
		std::cout << dp[num - 1] << "\n";
	}
return 0; }