#include <iostream>

int main(int argc, char** argv) {
	int N; std::cin >> N;
	int cnt = 1;
	for (int sum = 1; N > sum; cnt++) {
		sum += cnt * 6;
	}
	std::cout << cnt;
return 0; }
