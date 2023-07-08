#include<iostream>
using namespace std;

int lan[10000];
int main() { ios::sync_with_stdio(false);
	cin.tie(NULL);
	int K, N;
	cin >> K >> N;
	int  maxvalue = 0;
	for (int i = 0; i < K; i++) {
		cin >> lan[i];
		if (lan[i] > maxvalue) maxvalue = lan[i];
	}
	long mid, low = 1, high = maxvalue;
	int result = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		int cnt = 0;
		for (int i = 0; i < K; i++) {
			cnt += lan[i] / mid;
		}
		if (cnt >= N) {
			low = mid + 1;
			if (result < mid) result = mid;
		}
		else high = mid - 1;
	}
	cout << result;
return 0; }
