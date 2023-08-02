#include <iostream>

int main(int argc, char** argv) {
	int A, B, V;
	std::cin >> A >> B >> V;
	int snail = (V - B - 1) / (A - B) + 1;
	std::cout << snail;
return 0; }
