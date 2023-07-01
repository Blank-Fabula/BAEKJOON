#include <iostream>
#include <algorithm>

using namespace std;

int arrNum[1000000];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int repeat;
	cin >> repeat;
	for (int i = 0; i < repeat; i++) {
		cin >> arrNum[i];
	}
	sort(arrNum, arrNum + repeat);
	for (int i = 0; i < repeat; i++) {
		cout << arrNum[i] << "\n";
	}
return 0; }
