#include <iostream>
using namespace std;

#define DIVISOR 10007
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int dp[1000][10] = { 0 };
	int n; cin >> n;
	for (int i = 0; i < 10; ++i) { dp[0][i] = 1; }
	for (int i = 1; i < n; ++i) {
		dp[i][0] = 1;
		for (int j = 1; j <= 9; ++j) {
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % DIVISOR;
		}
	}
	int result = 0;
	for (int i = 0; i < 10; ++i) {
		result = (result + dp[n - 1][i]) % DIVISOR;
	}
	cout << result;
return 0; }
