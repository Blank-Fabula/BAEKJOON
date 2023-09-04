#include <iostream>
#include <queue>

int main(int argc, char** argv) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);
	std::priority_queue<int> pq[11];
	int N, K; std::cin >> N >> K;
	for (int i = 0; i < N; i++) {
		int P, W; std::cin >> P >> W;
		pq[P - 1].push(W);
	}
	while (K--) {
		for (int i = 0; i < 11; i++) {
			if (!pq[i].empty()) {
				pq[i].top() > 0 ? pq[i].push(pq[i].top() - 1) : pq[i].push(0);
				pq[i].pop();
			}
		}
	}
	int result = 0;
	for (int i = 0; i < 11; i++) {
		if (!pq[i].empty()) { result += pq[i].top(); }
	}
	std::cout << result;
return 0; }