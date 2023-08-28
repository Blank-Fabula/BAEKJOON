#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	stack<int> s_;
	string isTrue[] = { "no", "yes" };
	for (bool key = true; ; key = true) {
		string str; getline(cin, str);
		if (str == ".") { break; }
		for (char c : str) {
			if (c == '(' || c == '[') { s_.push(c);
			} else if (c == ')') {
				if (!s_.empty()) {
					if (s_.top() == '(') { s_.pop();
					} else { key = false; break; }
				} else { key = false; break; }
			} else if (c == ']') {
				if (!s_.empty()) {
					if (s_.top() == '[') { s_.pop();
					} else { key = false; break; }
				} else { key = false; break; }
			}
		} if (!s_.empty()) { key = false; }
		cout << isTrue[key] << '\n';
		while (!s_.empty()) { s_.pop(); }
	}
return 0; }