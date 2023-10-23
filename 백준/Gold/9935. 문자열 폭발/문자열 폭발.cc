#include <iostream>
#include <string>

int main(int argc, char** argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	std::string sentence; std::cin >> sentence;
	std::string bomb; std::cin >> bomb;
	int bombEndIdx = bomb.length() - 1;

	std::string answer = "";

	for (char c : sentence) {
		answer.push_back(c);
		if (c == bomb[bombEndIdx] && answer.size() >= bomb.length()) {
			for (int bombCnt = 0, idx = bombEndIdx; idx >= 0; idx--) {
				if (answer.back() == bomb[idx]) { answer.pop_back(); bombCnt++; }
				else {
					while (bombCnt) { answer.push_back(bomb[bomb.length() - bombCnt--]); }
					break;
				}
			}
		}
	}

	if (answer.empty()) { std::cout << "FRULA"; }
	std::cout << answer;

return 0; }