#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int arr_Num[9][9];
	int max = 0; int y, x;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr_Num[i][j];
			if (arr_Num[i][j] >= max) {
				max = arr_Num[i][j];
				y = i + 1, x = j + 1;
			}
		}
	}
	cout << max << '\n' << y << ' ' << x;
return 0; }
