#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    std::vector<int> arr;
    int N; std::cin >> N;
    for (int base = 1, six = base; six <= N; six += base += 4) { arr.push_back(six); }
    std::vector<int> dp(N + 1);
    for (int i = 1; i <= N; i++) { dp[i] = N; }
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        for (int j = arr[i]; j <= N; j++) {
            dp[j] = std::min(dp[j], dp[j - arr[i]] + 1);
        }
    }
    std::cout << dp[N];
return 0; }