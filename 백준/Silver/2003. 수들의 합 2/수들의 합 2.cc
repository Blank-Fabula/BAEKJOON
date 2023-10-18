#include <iostream>
#include <vector>

int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int answer = 0, idxStart = 0, sum = 0;
    int n, m; std::cin >> n >> m;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        sum += arr[i];
        while (sum > m) { sum -= arr[idxStart++]; }
        if (sum == m) { answer++; }
    }
    std::cout << answer;
return 0; }