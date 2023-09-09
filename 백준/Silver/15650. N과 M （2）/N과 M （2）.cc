#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int N, M;
std::vector<bool> visit;
std::vector<int> arr, arrSol;
std::set<std::vector<int>> sol;

void solve() {
	if (arr.size() == M) {
		for (int i = 0; i < M; i++) {
			arrSol.push_back(arr[i]);
		} std::sort(arrSol.begin(), arrSol.end());
		sol.insert(arrSol); arrSol.clear();
	}
	for (int i = 0; i < N; i++) {
		if (!visit[i]) {
			arr.push_back(i + 1);
			visit[i] = true;
			solve();
			arr.pop_back();
			visit[i] = false;
		}
	}
return; }
int main(int argc, char** argv) {
	std::cin >> N >> M;
	visit.resize(N, false);
	solve();
	for (; !sol.empty(); sol.erase(*sol.begin())) {
		for (int i : *sol.begin()) {
			std::cout << i << " ";
		} std::cout << "\n";
	}
return 0; }