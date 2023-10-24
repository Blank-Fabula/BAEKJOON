#include <iostream>
#include <vector>

std::vector<int> nums;

void output(const int& N, const int& M, const int& len, const int& currentNum) {
    
	if (len == M) {
		for (int num : nums) { std::cout << num << ' '; }
		std::cout << '\n'; return;
	}

	for (int i = currentNum; i <= N; i++) { nums[len] = i; output(N, M, len + 1, i); }
    
return; }

void start(const int& N, const int& M, const int& startNum) {
    
	nums[0] = startNum; output(N, M, 1, startNum);
    
return; }

int main(int argc, char** argv) {
    
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int N; std::cin >> N;
	int M; std::cin >> M; nums.resize(M);

	for (int i = 1; i <= N; i++) { start(N, M, i); }
    
return 0; }