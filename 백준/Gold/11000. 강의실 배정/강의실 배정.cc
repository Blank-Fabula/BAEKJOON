#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

int main(int argc, char** argv) {
	int N; std::cin >> N;
	std::vector<std::pair<int, int>> time(N);
	for (int i = 0; i < N; i++) { std::cin >> time[i].first >> time[i].second; }
	std::sort(time.begin(), time.end());
	std::priority_queue<int, std::vector<int>, std::greater<int>> pq_time;
	pq_time.push(time.front().second);
	for (int i = 1; i < N; i++) {
		if (time[i].first >= pq_time.top()) {
			pq_time.pop();
			pq_time.push(time[i].second);
		} else { pq_time.push(time[i].second); }
	}
	std::cout << pq_time.size();
return 0; }