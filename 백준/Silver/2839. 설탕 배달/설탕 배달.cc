#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	int result = 0;
	while (n > 2) {
		if (n % 5 == 0) {
			result += n / 5;
			n = 0;
		} else {
			result++;
			n -= 3;
		}
	}
	if (n != 0) { cout << -1;
	} else { cout << result; }
return 0; }
