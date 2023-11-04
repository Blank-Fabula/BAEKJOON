#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	int N; std::cin >> N;

	std::string strKey; std::cin >> strKey;
	int frontLen = 0, backLen = 0;
	for (int i = 0; i < strKey.length(); i++) {
		if (strKey[i] == '*') { frontLen = i; break; }
	} backLen = strKey.length() - 1 - frontLen;

	for (bool answer = true; N--; answer = true) {
		std::string str; std::cin >> str;

		if (str.compare(0, frontLen, strKey, 0, frontLen)) { answer = false; }
		str.erase(0, frontLen);

		if (str.length() < backLen) { answer = false; }
		else {
			int backStart = str.length() - (strKey.length() - frontLen - 1);
			if (str.compare(backStart, backLen, strKey, frontLen + 1, backLen)) { answer = false; }
		}

		std::cout << (answer ? "DA\n" : "NE\n");
	}

return 0; }