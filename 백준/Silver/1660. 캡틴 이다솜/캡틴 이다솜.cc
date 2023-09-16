#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::vector<int> arr;
    int N; std::cin >> N;
    int base = 1, max = 1;
    for (int bomb = 1; bomb <= N; bomb += max) {
        arr.push_back(bomb);
        max += base++ + 1;
    }
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