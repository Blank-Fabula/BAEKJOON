#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char** argv) {
	int N, K; std::cin >> N >> K;
	std::vector<int> ranks(N + 1);
	std::vector<std::pair<std::pair<int, int>, std::pair<int, int>>> arr(N);
	for (int i = 0; i < N; i++) {
		int country; std::cin >> country;
		int G, S, B; std::cin >> G >> S >> B;
		arr[i] = { { country, G }, {S, B} };
	} std::sort(arr.begin(), arr.end());
	int current = 1, sum = 0;
	ranks[arr[0].first.first] = current;
	for (int i = 1; i < N; i++) {
		if (arr[i].first.second == arr[i - 1].first.second &&
			arr[i].second.first == arr[i - 1].second.first &&
			arr[i].second.second == arr[i - 1].second.second) {
			ranks[arr[i].first.first] = current; sum++;
		} else { ranks[arr[i].first.first] = ++current + sum; sum = 0; }
	}
	std::cout << ranks[K];
return 0; }