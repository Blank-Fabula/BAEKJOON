#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int arr_A[5];
	for (int i = 0; i < 5; ++i) {
		cin >> arr_A[i];
		for (int j = 0; j < i; ++j) {
			if (arr_A[i] == arr_A[j]) {
				arr_A[i] = -1;
				arr_A[j] = -1;
			}
		}
	}
	for (int i = 0; i < 5; ++i) {
		if (arr_A[i] != -1) { cout << arr_A[i]; }
	}
return 0; }
