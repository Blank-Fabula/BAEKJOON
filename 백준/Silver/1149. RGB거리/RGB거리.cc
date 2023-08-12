#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    vector<vector<int>> dp(N + 1, vector<int>(3, 0));
    for (int i = 1; i <= N; i++) {
        cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
        dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
    } int result = min(dp[N][0], min(dp[N][1], dp[N][2]));
    cout << result;
return 0; }
