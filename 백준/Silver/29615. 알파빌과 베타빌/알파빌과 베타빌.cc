#include <iostream>
#include <map>

int main(int argc, char** argv) {
	std::map<int, int> list;
	int N, M; std::cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		int num; std::cin >> num;
		list[num] = i;
	}
	int result = 0;
	for (int i = 0; i < M; i++) {
		int num; std::cin >> num;
		if (list[num] > M) { result++; }
	}
	std::cout << result;
return 0; }