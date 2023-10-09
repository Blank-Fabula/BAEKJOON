#include <iostream>

int main(int argc, char **argv) {
	int result = 0;
	int N, X; std::cin >> N >> X;
	for (int num; N--; result += num) { std::cin >> num; }
	std::cout << (result % X == 0 ? 1 : 0);
return 0; }