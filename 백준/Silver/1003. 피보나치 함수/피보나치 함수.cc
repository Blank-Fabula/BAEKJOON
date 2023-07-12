#include <iostream>
#include <utility>
using namespace std;
#define N_MAX 40

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	pair<int, int> arrPairs[N_MAX + 1];
	int cntZero = 1, cntOne = 0;
	for (int num = 0; num <= N_MAX; num++) {
		arrPairs[num] = make_pair(cntZero, cntOne);
		int tmp = cntZero;
		cntZero = cntOne;
		cntOne += tmp;
	}
	int T; cin >> T;
	while (T--) {
		int N; cin >> N;
		cout << arrPairs[N].first << " " << arrPairs[N].second << "\n";
	}
return 0; }
