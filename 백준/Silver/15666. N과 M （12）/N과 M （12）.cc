#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

#define NUM_INDAX_VALUE(arr, num) std::find(nums.begin(), nums.end(), currentNum) - nums.begin()

std::vector<int> input, nums;

void output(const int& N, const int& M, const int& len, const int& currentNum) {

	if (len == M) {
		for (int out : input) { std::cout << out << ' '; }
		std::cout << '\n'; return;
	}

	for (int i = NUM_INDAX_VALUE(nums, currentNum); i < nums.size(); i++) {
		input[len] = nums[i]; output(N, M, len + 1, nums[i]);
	}

return; }

void start(const int& N, const int& M, const int& startNum) {

	input[0] = startNum; output(N, M, 1, startNum);

return; }

int main(int argc, char** argv) {

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	std::set<int> st_num;

	int N; std::cin >> N;
	int M; std::cin >> M; input.resize(M);

	for (int i = 0; i < N; i++) { int num; std::cin >> num; st_num.insert(num); }
	nums.resize(st_num.size());

	for (int& num : nums) { num = *st_num.begin(); st_num.erase(st_num.begin()); }

	for (int i = 0; i < nums.size(); i++) { start(N, M, nums[i]); }

return 0; }