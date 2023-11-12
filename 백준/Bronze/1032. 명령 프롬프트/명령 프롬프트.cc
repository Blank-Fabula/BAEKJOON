#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int N; std::cin >> N;
	std::string answer; std::cin >> answer;
	for (N = N - 1; N; N--) {
		std::string str; std::cin >> str;
		for (int i = 0; i < str.length(); i++) {
			if (answer[i] != str[i]) { answer[i] = '?'; }
		}
	} std::cout << answer;

return 0; }