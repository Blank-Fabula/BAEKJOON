#include <iostream>
#include <vector>

int N, S, cnt = 0;
std::vector<int> arrNum;

void solve(int idx, int sum) {
    if (idx == N) {
        if (sum == S) { cnt++; }
        return;
    }
    solve(idx + 1, sum + arrNum[idx]);
    solve(idx + 1, sum);
return; }
int main(int argc, char** argv) {
    std::cin >> N >> S;
    arrNum.resize(N);
    for (int i = 0; i < N; i++) { std::cin >> arrNum[i]; }
    if (S == 0) { cnt--; } solve(0, 0);
    std::cout << cnt << "\n";
return 0; }