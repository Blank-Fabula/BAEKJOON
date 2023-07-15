#include <iostream>
#include <deque>
using namespace std;

int main(int avg, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	deque<int> dq;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string word; cin >> word;
		if (word.substr(0, 4) == "push") {
			int X; cin >> X;
			if (word == "push_front")
				dq.push_front(X);
			else if (word == "push_back")
				dq.push_back(X);
		}
		else if (word.substr(0, 3) == "pop") {
			if (dq.empty()) cout << -1 << '\n';
			else if (word == "pop_front") {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
			else if (word == "pop_back") {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (word == "size") {
			cout << dq.size() << '\n';
		}
		else if (word == "empty") {
			cout << dq.empty() << '\n';
		}
		else if (word == "front") {
			if (dq.empty()) cout << -1 << '\n';
			else cout << dq.front() << '\n';
		}
		else if (word == "back") {
			if (dq.empty()) cout << -1 << '\n';
			else cout << dq.back() << '\n';
		}
	}
return 0; }
