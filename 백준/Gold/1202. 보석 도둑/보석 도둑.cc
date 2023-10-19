#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int n, k; std::cin >> n >> k;
    std::vector<std::pair<int, int>> gems(n);
    for (int i = 0; i < n; i++) {
        std::cin >> gems[i].first >> gems[i].second;
    } sort(gems.begin(), gems.end());
    std::vector<int> bags(k);
    for (int i = 0; i < k; i++) {
        std::cin >> bags[i];
    } sort(bags.begin(), bags.end());
    long long answer = 0;
    std::priority_queue<int> values;
    for (int p = 0, i = 0; i < k; i++) {
        while (p < n && bags[i] >= gems[p].first) {
            values.push(gems[p++].second);
        }
        if (!values.empty()) { answer += values.top(); values.pop(); }
    } std::cout << answer;
return 0; }