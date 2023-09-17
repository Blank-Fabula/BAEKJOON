#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
	int num, length; std::cin >> num >> length;
	std::vector<int> arr(num + 1, 0);
	for (int i = 1; i <= num; i++) {
		int value; std::cin >> value;
		arr[i] = arr[i - 1] + value;
	}
	int answer = arr[length];
	for (int i = length + 1; i <= num; i++) {
		answer = std::max(answer, arr[i] - arr[i - length]);
	}
	std::cout << answer;
return 0; }