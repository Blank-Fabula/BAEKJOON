#include <iostream>
#include <vector>

std::vector<bool> visit;
std::vector<int> arr;

void solve() {
	if (arr.size() == visit.size()) {
		for (int i = 0; i < visit.size(); i++) {
			std::cout << arr[i] << " ";
		} std::cout << "\n";
	}
	for (int i = 0; i < visit.size(); i++) {
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
	int N; std::cin >> N;
	visit.resize(N, false);
	solve();
return 0; }