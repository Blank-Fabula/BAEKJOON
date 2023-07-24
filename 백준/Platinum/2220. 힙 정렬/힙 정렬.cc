#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	vector<int> arr(n + 1, 1);
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 1; j /= 2) {
			arr[j] = arr[j / 2];
		}
		arr[1] = i + 1;
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}
return 0; }
