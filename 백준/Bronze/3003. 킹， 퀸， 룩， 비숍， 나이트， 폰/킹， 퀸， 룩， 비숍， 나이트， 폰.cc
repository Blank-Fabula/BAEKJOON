#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int chess[] = { 1, 1, 2, 2, 2, 8 };
	int out[] = { 0, 0, 0, 0, 0, 0 };
	for (int i = 0; i < 6; ++i) {
		cin >> out[i];
		out[i] = chess[i] - out[i];
	}
	for (int i = 0; i < 6; ++i) {
		cout << out[i] << ' ';
	}
return 0; }
