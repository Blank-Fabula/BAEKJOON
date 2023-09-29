#include <iostream>
#include <vector>
#include <set>

int main(int argc, char** argv) {
	int N; std::cin >> N;
	std::vector<int> arr(N);
	std::vector<int> dp(N);
	for (int i = 0; i < N; i++) {
		std::cin >> arr[i];
		dp[i] = arr[i];
	}
	std::set<int> answers;
	answers.insert(dp[0]);
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i] && dp[j] + arr[i] > dp[i]) {
				dp[i] = dp[j] + arr[i];
				answers.insert(dp[i]);
			}
		}
	}
	std::cout << *answers.rbegin();
return 0; }