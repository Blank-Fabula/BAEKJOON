#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int arrBoard[50][50]; // B = 0, W = 1;

int replace(int x, int y) {
	int countW = 0, countB = 0;
	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if ((i + j) % 2 == arrBoard[i][j]) countW++;
			if ((i + 1 + j) % 2 == arrBoard[i][j]) countB++;
		}
	}
return min(countW, countB); }

int main() { int mini = INT_MAX;
	int y, x;
	char area;
	cin >> y >> x;
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			cin >> area;
			if (area == 'B') arrBoard[i][j] = 0;
			else if (area == 'W') arrBoard[i][j] = 1;
		}
	}
	for (int i = 0; i <= y - 8; i++) {
		for (int j = 0; j <= x - 8 ; j++) {
			if (mini > replace(i, j)) mini = replace(i, j);
		}
	}
	cout << mini;
return 0; }
