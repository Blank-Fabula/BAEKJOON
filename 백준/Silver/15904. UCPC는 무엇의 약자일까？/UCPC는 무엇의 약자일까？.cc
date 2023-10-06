#include <iostream>
#include <string>

int main(int argc, char **argv) {
    std::ios::sync_with_stdio(false);
	std::string result = "UCPC";
	int idx = 0;
	std::string str; std::getline(std::cin, str);
	for (char c : str) {
		if (c == result[idx]) { idx++; }
	}
	if (idx == 4) { std::cout << "I love UCPC"; }
	else { std::cout << "I hate UCPC"; }
return 0; }