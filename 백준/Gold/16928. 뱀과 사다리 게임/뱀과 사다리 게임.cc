#include <iostream>
#include <map>
#include <queue>
#include <vector>
#include <climits>

std::map<int, int> event;
std::queue<std::pair<int, int>> q;
std::vector<int> arr(101, INT_MAX);

void BFS(int, int);
int main(int argc, char** argv) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int N, M; std::cin >> N >> M;
	for (int i = 0; i < N + M; i++) {
		int A, B; std::cin >> A >> B;
		event.insert({ A, B });
	}
	BFS(1, 0);
	std::cout << arr[100];
return 0; }

void BFS(int now, int cnt) {
	for (int i = 1; i <= 6; i++) {
		if (event[now + i]) { q.push({ event[now + i], cnt + 1 });
		} else { q.push({ now + i, cnt + 1 }); }
	}
	while (!q.empty()) {
		std::pair<int, int> current = q.front(); q.pop();
		if (current.first > 100) { continue; }
		if (current.second < arr[current.first]) {
			arr[current.first] = current.second;
			BFS(current.first, current.second);
		}
	}
return; }