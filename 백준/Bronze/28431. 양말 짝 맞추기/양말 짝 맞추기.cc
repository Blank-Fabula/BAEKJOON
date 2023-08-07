#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int sock = 0;
	for (int i = 0; i < 5; ++i) {
		int N; cin >> N;
		sock ^= N;
	} cout << sock;
return 0; }
