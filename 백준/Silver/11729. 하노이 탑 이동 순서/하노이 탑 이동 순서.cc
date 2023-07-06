#include <iostream>
using namespace std;

void hanoi(int, int, int, int);
int main() { int num;
	cin >> num;
	cout << (1 << num) - 1 << "\n";
	hanoi(num, 1, 2, 3);
return 0; }

void hanoi(int num, int A, int B, int C) {
	if (num == 1) {
		cout << A << " " << C << "\n";
		return;
	}
	else {
		hanoi(num - 1, A, C, B);
		cout << A << " " << C << "\n";
		hanoi(num - 1, B, A, C);
	}
}
