#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char** argv) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int N; std::cin >> N;
	std::vector<int> arr(N);
	for (int i = 0; i < N; i++) { std::cin >> arr[i]; }
	sort(arr.begin(), arr.end());
	for (int i = 0; i < N; i++) { std::cout << arr[i] << "\n"; }
return 0; }