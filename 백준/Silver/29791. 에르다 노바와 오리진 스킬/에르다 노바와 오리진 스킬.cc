#include <iostream>
#include <set>

#define NOVA 100
#define ORIGIN 360
int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
	std::set<int> stN, stM;
	int N, M; std::cin >> N >> M;
	for (int num; N--; stN.insert(num)) { std::cin >> num; }
	for (int num; M--; stM.insert(num)) { std::cin >> num; }
	int cntNova = 0, cntOrigin = 0;
	for (int cnt = 0; !stN.empty(); stN.erase(*stN.begin())) {
		if (cnt - *stN.begin() <= 0) {
			cntNova++;
			cnt = *stN.begin() + NOVA;
		}
	} std::cout << cntNova << " ";
	for (int cnt = 0; !stM.empty(); stM.erase(*stM.begin())) {
		if (cnt - *stM.begin() <= 0) {
			cntOrigin++;
			cnt = *stM.begin() + ORIGIN;
		}
	} std::cout << cntOrigin;
return 0; }