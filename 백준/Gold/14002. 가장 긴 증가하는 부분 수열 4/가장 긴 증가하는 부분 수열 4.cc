#include <iostream>
#include <vector>
#include <set>

int main(int argc, char** argv) {
    int N; std::cin >> N;
    std::vector<int> arr(N);
    std::vector<std::pair<int, std::vector<int>>> dp(N);
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
        dp[i] = { 1, {arr[i]} };
    }
    std::set<std::pair<int, int>> answers;
    answers.insert({ 1, 0 });
    int c = 1;
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i] && dp[i].first < dp[j].first + 1) {
                dp[i] = { dp[j].first + 1, dp[j].second };
                dp[i].second.push_back(arr[i]);
                answers.insert({dp[i].first, i});
            }
        }
    }
    std::cout << answers.rbegin()->first << "\n";
    std::vector<int> num = dp[answers.rbegin()->second].second;
    for (int i : num) { std::cout << i << " "; }
return 0; }