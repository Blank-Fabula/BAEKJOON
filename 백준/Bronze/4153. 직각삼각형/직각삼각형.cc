#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int arr_[3] = { 0 };
	while (1) {
		cin >> arr_[0] >> arr_[1] >> arr_[2];
		if (!arr_[0] && !arr_[1] && !arr_[2]) {
			break;
		} else {
			sort(arr_, arr_ + 3);
			if (pow(arr_[0], 2) + pow(arr_[1], 2) == pow(arr_[2], 2)) {
				cout << "right" << '\n';
			} else cout << "wrong" << '\n';
		}
	}
return 0; }
