#include <iostream>
#include <vector>
#include <algorithm>

#define NUM_INDAX_VALUE(arr, num) std::find(nums.begin(), nums.end(), currentNum) - nums.begin()

std::vector<int> input, nums;

void output(const int& N, const int& M, const int& len, const int& currentNum) {

	if (len == M) {
		for (int out : input) { std::cout << out << ' '; }
		std::cout << '\n'; return;
	}

	for (int i = NUM_INDAX_VALUE(nums, currentNum); i < N; i++) {
		input[len] = nums[i]; output(N, M, len + 1, nums[i]);
	}

return; }

void start(const int& N, const int& M, const int& startNum) {

	input[0] = startNum; output(N, M, 1, startNum);

return; }

int main(int argc, char** argv) {

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int N; std::cin >> N; nums.resize(N);
	int M; std::cin >> M; input.resize(M);

	for (int& num : nums) { std::cin >> num; }
	std::sort(nums.begin(), nums.end());

	for (int i = 0; i < N; i++) { start(N, M, nums[i]); }

return 0; }