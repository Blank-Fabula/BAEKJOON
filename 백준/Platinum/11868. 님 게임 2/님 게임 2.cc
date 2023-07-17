#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int result = 0;
	int N; cin >> N;
	while (N--) {
		int P; cin >> P;
		result ^= P;
	}
	if (result != 0) {
		cout << "koosaga";
	} else { cout << "cubelover"; }
return 0; }
