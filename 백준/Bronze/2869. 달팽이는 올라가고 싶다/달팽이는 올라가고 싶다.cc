#include <iostream>

int main() { int A, B, V;
	std::cin >> A >> B >> V;
	int snail = (V - A) / (A - B) + 1;
	if ((V - A) % (A - B) != 0) snail++;
	std::cout << snail;
return 0; }
