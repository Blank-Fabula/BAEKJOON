#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<int> v_Dp(10'001);
	int cnt = 0, dis = 7;
	for (int i = 1; i < v_Dp.size(); ++i) {
		if (i % 6 == 0) { cnt++; }
		else if (i % dis == 0) { cnt--; }
		v_Dp[i] = v_Dp[i - 1] + cnt + 1;
		if (i % dis == 0) { cnt++;
			dis += 6;
		}
	}
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		cout << v_Dp[n] << '\n';
	}
return 0; }
