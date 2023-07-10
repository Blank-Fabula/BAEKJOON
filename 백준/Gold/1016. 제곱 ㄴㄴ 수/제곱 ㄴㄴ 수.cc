#include <iostream>
using namespace std;

bool arr[1000001];
int main(int avg, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long min, max; cin >> min >> max;
	for (int i = 0; i <= max - min; i++) {
		arr[i] = true;
	}
	for (long long sq = 2; sq * sq <= max; sq++) {
		long long start = min / (sq * sq);
		if (start * (sq * sq) != min) {
			start++;
		}
		for (long long i = start; i * (sq * sq) <= max; i++) {
			arr[i * (sq * sq) - min] = false;
		}
	}
	int cnt = 0;
	for (int i = 0; i <= max - min; i++) {
		cnt += arr[i];
	}
	cout << cnt;
return 0; }
