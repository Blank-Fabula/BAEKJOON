#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while (t--) {
		int M, N, x, y; cin >> M >> N >> x >> y;
		bool exist = false;
		for (int i = 0; i < N; ++i) {
			int current = M * i + x;
			if ((current - 1) % N == y - 1) {
				cout << current << '\n';
				exist = true;
				break;
			}
		} if (!exist) { cout << -1 << '\n'; }
	}
return 0; }
