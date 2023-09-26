#include <iostream>

int main(int argc, char* argv[]) {
	int N; std::cin >> N;
	while (N--) {
		int A, B, X; std::cin >> A >> B >> X;
		std::cout << A * (X - 1) + B << "\n";
	}
return 0; }