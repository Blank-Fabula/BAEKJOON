#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, char** argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);
	std::vector<std::vector<int>> dp;
	std::string strA, strB; std::cin >> strA >> strB;
	dp.resize(strA.length() + 1, std::vector<int>(strB.length() + 1, 0));
	for (int i = 1; i <= strA.length(); i++) {
		for (int j = 1; j <= strB.length(); j++) {
			if (strA[i - 1] == strB[j - 1]) { dp[i][j] = dp[i - 1][j - 1] + 1; }
			else { dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]); }
		}
	}
	std::cout << dp[strA.length()][strB.length()];
return 0; }