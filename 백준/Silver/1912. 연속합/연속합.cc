#include <iostream>
#include <vector>
#include <algorithm>

int solve(std::vector<int>& arr, int& N) {
	int value = 0, result = arr[0];
	for (int i = 0; i < N; i++) {
		if (value + arr[i] > arr[i]) { value += arr[i];
		} else { value = arr[i]; }
		if (value > result) { result = value; }
	}
return result; }
int main(int argc, char** argv) {
	int N; std::cin >> N;
	std::vector<int> arr(N);
	for (int i = 0; i < N; i++) { std::cin >> arr[i]; }
	std::cout << solve(arr, N);;
return 0; }