#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	int N, K; cin >> N >> K;
	vector<int> arr(N);
	for (int i = 0; i < N; i++) { arr[i] = i + 1; }
	cout << "<";
	for (int i = --K; arr.size() > 1; i += K) {
		if (i + 1 > arr.size()) { i %= arr.size(); }
		cout << arr[i] << ", ";
		for (int j = i; j + 1 < arr.size(); j++) { arr[j] = arr[j + 1]; }
		arr.erase(arr.end() - 1);
	} cout << arr.front() << ">";
return 0; }