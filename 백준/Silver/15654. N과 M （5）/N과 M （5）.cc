#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int N, M;
std::vector<bool> visit;
std::vector<int> arrNum, arr;

void solve() {
	if (arr.size() == M) {
		for (int i = 0; i < M; i++) { std::cout << arr[i] << " "; }
		std::cout << "\n";
	}
	for (int i = 0; i < N; i++) {
		if (!visit[i]) {
			arr.push_back(arrNum[i]); visit[i] = true;
			solve();
			arr.pop_back(); visit[i] = false;
		}
	}
return; }
int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
	std::cin >> N >> M;
	arrNum.resize(N, 0); visit.resize(N, false);
	for (int i = 0; i < N; i++) { std::cin >> arrNum[i]; }
	std::sort(arrNum.begin(), arrNum.end());
	solve();
return 0; }