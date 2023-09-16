#include <iostream>
#include <set>

int main(int argc, char* argv[]) {
	std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
	std::multiset<int> ms;
	int test; std::cin >> test;
	for (int operationCnt; test-- && std::cin >> operationCnt; ms.clear()) {
		while (operationCnt--) {
			char c; std::cin >> c; int num; std::cin >> num;
			if (c == 'I') { ms.insert(num); }
			else if (c == 'D' && !ms.empty()) {
				if (num == 1) { ms.erase(std::next(ms.end(), -1)); }
				else { ms.erase(ms.begin()); }
			}
		}
		if (ms.empty()) { std::cout << "EMPTY" << "\n"; }
		else { std::cout << *ms.rbegin() << " " << *ms.begin() << "\n"; }
	}
return 0; }