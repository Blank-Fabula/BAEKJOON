#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int chess[] = { 1, 1, 2, 2, 2, 8 };
	int in[] = { 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < 6; ++i) {
		cin >> in[i];
	}
	for (int i = 0; i < 6; ++i) {
		cout << chess[i] - in[i] << ' ';
	}
return 0; }
