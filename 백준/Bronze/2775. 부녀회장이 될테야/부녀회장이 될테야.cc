#include <iostream>
using namespace std;

int calc(int, int);
int main(int argc, char** argv) {
	int TC; cin >> TC;
	while (TC--) {
		int k, n; cin >> k >> n;
		cout << calc(k, n) << '\n';
	}
return 0; }

int calc(int a, int b) {
	if (a == 0) { return b; }
	if (b == 1) { return 1; }
return calc(a - 1, b) + calc(a, b - 1); }