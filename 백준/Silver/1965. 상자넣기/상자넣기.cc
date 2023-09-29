#include <iostream>
#include <vector>
#include <set>

int main(int argc, char** argv) {
	int N; std::cin >> N;
	std::vector<int> arr(N);
	for (int i = 0; i < N; i++) { std::cin >> arr[i]; }
	std::vector<int> dp(N, 1);
	std::set<int> answers;
	answers.insert(1);
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i] && dp[i] < dp[j] + 1) {
				dp[i] = dp[j] + 1;
				answers.insert(dp[i]);
			}
		}
	}
	std::cout << *answers.rbegin();
return 0; }