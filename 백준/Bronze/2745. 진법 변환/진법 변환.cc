#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

int main(int argc, char *argv[]) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	std::string N; std::cin >> N;
	int B; std::cin >> B;

	int answer = 0, N_len = N.length();
	for (int i = N_len; i > 0; i--) {
		if (isdigit(N[i - 1])) { answer += (N[i - 1] - '0') * ((int)pow(B, N_len - i)); }
		else { answer += (N[i - 1] - 'A' + 10) * ((int)pow(B, N_len - i)); }
	} std::cout << answer << '\n';

return 0; }