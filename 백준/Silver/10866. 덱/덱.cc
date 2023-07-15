#include <iostream>
#include <deque>
using namespace std;

int main(int avg, char** argv) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	deque<int> D;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string op; cin >> op;
		if (op.substr(0, 4) == "push") {
			int X; cin >> X;
			if (op == "push_front")
				D.push_front(X);
			else if (op == "push_back")
				D.push_back(X);
		}
		else if (op.substr(0, 3) == "pop") {
			if (D.empty()) cout << -1 << '\n';
			else if (op == "pop_front") {
				cout << D.front() << '\n';
				D.pop_front();
			}
			else if (op == "pop_back") {
				cout << D.back() << '\n';
				D.pop_back();
			}
		}
		else if (op == "size") {
			cout << D.size() << '\n';
		}
		else if (op == "empty") {
			cout << D.empty() << '\n';
		}
		else if (op == "front") {
			if (D.empty()) cout << -1 << '\n';
			else cout << D.front() << '\n';
		}
		else if (op == "back") {
			if (D.empty()) cout << -1 << '\n';
			else cout << D.back() << '\n';
		}
	}
return 0; }
