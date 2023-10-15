#include <iostream>

#define MOD 16769023

int power(int num, int n) {
	for (int calc = num; n--; num %= MOD) { num *= calc; }
return num; }

int main(int argc, char** argv) {
	int n; std::cin >> n;
	n = (n - 1) / 2;
	int answer = power(2, n);
	std::cout << answer;
return 0; }