#include <iostream>
using namespace std;

int dp[10'001];
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int cnt = 0, num = 6;
	for (int i = 1; i < 10'001; ++i) {
		if (i % num == 0) { ++cnt; }
		else if (i % (num + 1) == 0) { --cnt; }
		dp[i] = dp[i - 1] + cnt + 1;
		if (i % (num + 1) == 0) { ++cnt;
			num += 6;
		}
	}
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		cout << dp[n] << '\n';
	}
return 0; }
