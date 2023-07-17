#include<iostream>
using namespace std;

int main(int argc, char** argv) {
	long long arr[1001] = { 1, 1 };
	long long N; cin >> N;
	for (int i = 2; i <= N; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10'007;
	}
	cout << arr[N] << "\n";
return 0; }
