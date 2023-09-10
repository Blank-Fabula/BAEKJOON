#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

ll solve(int& N, int& K) {
    std::vector<ll> scores, dp(N);
    std::cin >> dp[0]; scores.push_back(dp[0]);
    for (int i = 1, num; i < N && (std::cin >> num); i++) {
        dp[i] = dp[i - 1] + num; scores.push_back(dp[i]);
    } std::sort(scores.begin(), scores.end());
    ll result = 0;
    for (int i = 0; i < K; i++, scores.pop_back()) {
        result += scores.back();
    }
return result; }
int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
    int N, K; std::cin >> N >> K;
    std::cout << solve(N, K);
return 0; }