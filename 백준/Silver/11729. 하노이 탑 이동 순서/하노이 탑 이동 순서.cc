#include <iostream>
using namespace std;

void hanoi(int, int, int, int);
int main() { int num;
	cin >> num;
	cout << (1 << num) - 1 << "\n";
	hanoi(num, 1, 2, 3);
return 0; }

void hanoi(int num, int a, int b, int c) {
	if (num == 1) {
		cout << a << " " << c << "\n";
		return;
	}
	else {
		hanoi(num - 1, a, c, b);
		cout << a << " " << c << "\n";
		hanoi(num - 1, b, a, c);
	}
}
