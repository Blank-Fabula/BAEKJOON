#include <iostream>
#include <vector>

#define N_LEN_MAX 100'000

int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int len = 0, idxStart = 0, sum = 0, minLen = N_LEN_MAX;
    int n, s; std::cin >> n >> s;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        sum += arr[i]; len++;
        while (sum >= s) {
            if (len < minLen) { minLen = len; }
            sum -= arr[idxStart++]; len--;
        }
    }
    if (minLen != N_LEN_MAX) { std::cout << minLen; }
    else { std::cout << 0; }
return 0; }