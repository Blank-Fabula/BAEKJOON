#include <iostream>
using namespace std;

void star(int, int, int);
int main(int avg, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			star(N, i, j);
		}
		cout << '\n';
	}
return 0; }

void star(int N, int len, int wid) {
	if (len / N % 3 == 1 && wid / N % 3 == 1) {
		cout << " ";
	}
	else {
		if (N < 3) { cout << "*";
		} else { star(N / 3, len, wid); }
	}
return; }
