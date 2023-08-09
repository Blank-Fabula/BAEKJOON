#include <iostream>
using namespace std;

#define DIVISOR 1000000000
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int dp[100][10] = { 0 };
	for (int i = 1; i < 10; ++i) { dp[0][i] = 1; }
	for (int i = 1; i < n; ++i) {
		dp[i][0] = dp[i - 1][1] % DIVISOR;
		for (int j = 1; j < 9; ++j) { dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % DIVISOR; }
		dp[i][9] = dp[i - 1][8] % DIVISOR;
	}
	int result = 0;
	for (int i = 0; i < 10; ++i) {
		result = (result + dp[n - 1][i]) % DIVISOR;
	} cout << result;
return 0; }
