#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false); std::cin.tie(NULL);
    int N, K; std::cin >> N >> K;
    std::vector<int> dp(K + 1, 0);
    for (int i = 0; i < N; i++) {
        int weight, value; std::cin >> weight >> value;
        for (int j = K; j >= weight; j--) {
            int current = dp[j - weight] + value;
            if (current > dp[j]) { dp[j] = current; }
        }
    }
    std::cout << dp[K];
return 0; }