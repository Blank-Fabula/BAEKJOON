#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while (t--) {
		stack<char> s_VPS;
		string s_; cin >> s_;
		for (int i = 0; i < s_.length(); ++i) {
			if (s_VPS.empty() || s_[i] == '(') { s_VPS.push(s_[i]);
			} else if (s_VPS.top() == '(') { s_VPS.pop(); }
		}
		if (s_VPS.empty()) { cout << "YES" << '\n';
		} else { cout << "NO" << '\n'; }
	}
return 0; }
