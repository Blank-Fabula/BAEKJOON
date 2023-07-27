#include<iostream>
#include<queue>
using namespace std;

int main(int argc, char** argv) {
	queue<int> q_JP;
	int n, k; cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		q_JP.push(i);
	}
	cout << '<';
	while (q_JP.empty() == false) {
		for (int i = 1; i < k; ++i) {
			q_JP.push(q_JP.front());
			q_JP.pop();
		}
		cout << q_JP.front();
		q_JP.pop();
		if (q_JP.empty() == false) { cout << ", "; }
	}
	cout << '>';
return 0; }
