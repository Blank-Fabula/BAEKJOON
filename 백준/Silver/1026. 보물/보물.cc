#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	int N; cin >> N;
	vector<int> arrA(N), arrB(N);
	for (int i = 0; i < N; i++) { cin >> arrA[i]; }
	sort(arrA.begin(), arrA.end());
	for (int i = 0; i < N; i++) { cin >> arrB[i]; }
	sort(arrB.begin(), arrB.end());
	int result = 0;
	for (int i = 0; i < N; i++) { result += arrA[i] * arrB[(arrB.size() - 1) - i]; }
	cout << result;
return 0; }