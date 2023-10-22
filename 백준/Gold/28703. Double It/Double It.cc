#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char** argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);
    
	int N; std::cin >> N; std::vector<int> A(N);
	for (int& A_N : A) { std::cin >> A_N; }
	int max = *std::max_element(A.begin(), A.end());
    
	for (int& A_N : A) {
		while (A_N * 2 <= max) { A_N *= 2; }
	} std::sort(A.begin(), A.end());
	int ans = A.back() - A.front();
    
	for (int i = 0; i < N - 1; i++) {
		ans = std::min(ans, A[i] * 2 - A[i + 1]);
	} std::cout << ans;

return 0; }