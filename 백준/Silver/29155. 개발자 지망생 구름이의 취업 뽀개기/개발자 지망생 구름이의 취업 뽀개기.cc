#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char** argv) {
	std::vector<std::vector<int>> problems(5);
	int N; std::cin >> N;
	int arrP[5] = { NULL };
	for (int i = 0; i < 5; i++) { std::cin >> arrP[i]; }
	for (int i = 0; i < N; i++) {
		int level, time; std::cin >> level >> time;
		problems[level - 1].push_back(time);
	} for (int i = 0; i < 5; i++) { std::sort(problems[i].begin(), problems[i].end()); }
	int before = 0, result = 240;
	for (int i = 0; i < 5; i++) {
		result += problems[i][0];
		before = problems[i][0];
		for (int j = 1; j < arrP[i]; j++) {
			result += (problems[i][j] - before) + problems[i][j];
			before = problems[i][j];
		}
	}
	std::cout << result;
return 0; }