#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	int N, K; cin >> N >> K;
	vector<int> coin(N);
	for (int i = N; i > 0; i--) { cin >> coin[i - 1]; }
	int coinCnt = 0;
	for (int i = 0; i < N; i++) {
		if (K % coin[i] < K) {
			coinCnt += K / coin[i];
			K %= coin[i];
		}
	} if (K) { coinCnt++; }
	cout << coinCnt;
return 0; }