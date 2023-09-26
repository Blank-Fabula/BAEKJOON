#include <iostream>
#include <vector>
#include <queue>

int answer = 0, N, M;
std::vector<bool> friends;
std::vector<std::priority_queue<int, std::vector<int>, std::greater<int>>> arr_pq;
void solve(int current, int cnt) {
	if (cnt == 3) { return; }
	while (!arr_pq[current].empty()) {
		int currentFriend = arr_pq[current].top();
		arr_pq[current].pop();
		if (!friends[currentFriend]) { answer++; }
		friends[currentFriend] = true;
		solve(currentFriend, cnt + 1);
	}
return; }
int main(int argc, char** argv) {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
	std::cin >> N >> M;
	friends.resize(N + 1, false);
	friends[1] = true;
	arr_pq.resize(N + 1);
	for (int i = 0; i < M; i++) {
		int numA, numB; std::cin >> numA >> numB;
		arr_pq[numA].push(numB);
		arr_pq[numB].push(numA);
	}
	solve(1, 1);
	std::cout << answer;
return 0; }