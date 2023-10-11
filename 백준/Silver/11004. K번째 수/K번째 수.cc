#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int kth(std::vector<int>& a, int k) {
    std::nth_element(a.begin(), a.end() - k, a.end(), std::greater<int>());
return a[a.size() - k]; }

int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int N, K; std::cin >> N >> K;
    std::vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    std::cout << kth(arr, K);
return 0; }