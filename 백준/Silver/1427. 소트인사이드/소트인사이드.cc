#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	vector<int> arr;
	int N; cin >> N;
	for (; N; N /= 10) { arr.push_back(N % 10); }
	sort(arr.begin(), arr.end());
	for (int i = arr.size() - 1; i >= 0; i--) { cout << arr[i]; }
return 0; }