#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

int main(int argc, char *argv[]) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	std::string N; std::cin >> N;
	int B; std::cin >> B;

	std::cout << std::strtol(N.c_str(), NULL, B);

return 0; }