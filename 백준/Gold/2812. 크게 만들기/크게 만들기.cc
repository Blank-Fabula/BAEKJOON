#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);
	int N, K, size = 0; std::cin >> N >> K;
	std::string str; std::cin >> str;
	std::vector<char> answer;
	for (int idx = 0; idx < N; ) {
		if (K && size > 1 && *std::next(answer.begin(), size - 1) > *std::next(answer.begin(), size - 2)) {
			answer.erase(std::next(answer.begin(), size-- - 2));
			K--; continue;
		}
		answer.push_back(str[idx++]);
		size++;
	}
	while (K--) {
		if (*std::next(answer.begin(), size - 1) > *std::next(answer.begin(), size - 2)) { answer.erase(std::next(answer.begin(), size-- - 2)); }
		else { answer.erase(std::next(answer.begin(), size-- - 1)); }
	}
	for (char& c : answer) { std::cout << c; }
return 0; }