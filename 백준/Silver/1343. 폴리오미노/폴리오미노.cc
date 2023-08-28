#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	bool isTrue = true;
	int cnt = 0;
	string str; cin >> str;
	for (int i = 0; i < str.size(); i++) {
		char c = str[i];
		if (c == 'X') { cnt++; }
		if (c != '.' && i == str.size() - 1) { i++; }
		if (c == '.' || i == str.size()) {
			if (cnt % 2 != 0) { isTrue = false; break;
			} else {
				for (; cnt - 4 >= 0; cnt -= 4) { replace(str.begin() + i - cnt, str.begin() + i - cnt + 4, 'X', 'A'); }
				for (; cnt - 2 >= 0; cnt -= 2) { replace(str.begin() + i - cnt, str.begin() + i - cnt + 2, 'X', 'B'); }
			} cnt = 0;
		}
	} if (isTrue) { cout << str;
	} else { cout << -1; }
return 0; }