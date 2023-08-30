#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string str; getline(cin, str);
	if (str.size() == 0) { cout << 0; return 0; }
	vector<char> s(str.begin(), str.end());
	if (s.size() && s.front() == ' ') { s.erase(s.begin()); }
	if (s.size() && s.back() == ' ') { s.resize(s.size() - 1); }
	int result = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') { result++; }
		if (i + 1 == s.size()) { result++; }
	} cout << result << '\n';
return 0; }