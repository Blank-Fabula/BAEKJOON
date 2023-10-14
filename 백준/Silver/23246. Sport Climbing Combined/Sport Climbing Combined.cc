#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(const std::tuple<int, int, int, int>& a, const std::tuple<int, int, int, int>& b) {
	int productA = std::get<1>(a) * std::get<2>(a) * std::get<3>(a);
	int productB = std::get<1>(b) * std::get<2>(b) * std::get<3>(b);
	if (productA == productB) {
		int sumA = std::get<1>(a) + std::get<2>(a) + std::get<3>(a);
		int sumB = std::get<1>(b) + std::get<2>(b) + std::get<3>(b);
		if (sumA == sumB) { return std::get<0>(a) < std::get<0>(b); }
        return sumA < sumB;
	}
	return productA < productB;
}
int main(int argc, char** argv) {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
	int n; std::cin >> n;
	std::vector<std::tuple<int, int, int, int>> players(n);
	for (int i = 0; i < n; i++) {
		int b; std::cin >> b;
		int p, q, r; std::cin >> p >> q >> r;
		players[i] = { b, p, q, r };
	}
	std::sort(players.begin(), players.end(), cmp);
	for (int i = 0; i < 3; i++) {
		std::cout << std::get<0>(players[i]) << " ";
	}
return 0; }