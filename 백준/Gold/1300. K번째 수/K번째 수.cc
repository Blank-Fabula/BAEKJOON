#include <iostream>

int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false);
    int N, K; std::cin >> N >> K;
    int left = 1, right = K;
    for (int cnt = 0; left <= right; cnt = 0) {
        int middle = (left + right) / 2;
        for (int i = 1; i <= N; i++) {
            cnt += std::min(middle / i, N);
        }
        if (cnt >= K) { right = middle - 1; }
        else { left = middle + 1; }
    }
    std::cout << left;
return 0; }