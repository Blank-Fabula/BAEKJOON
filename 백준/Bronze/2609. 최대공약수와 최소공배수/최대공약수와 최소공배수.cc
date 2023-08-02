#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a, b; cin >> a >> b;
	int result;
	for (int i = 1; i <= a; ++i) {
		if (a % i == 0 && b % i == 0) { result = i; }
	}
	cout << result << '\n' << a * b / result;
return 0; }
