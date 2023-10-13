#include <iostream>
#include <string>

std::string str;
int answer = 4;

void solve(int leftIdx, int rightIdx, int cnt) {
	if (cnt >= answer) { return; }
	if (str[leftIdx] == str[rightIdx]) {
		if (leftIdx >= rightIdx) { answer = cnt; }
		else { solve(leftIdx + 1, rightIdx - 1, cnt); }
	}
	else {
		solve(leftIdx + 1, rightIdx, cnt + 1);
		solve(leftIdx, rightIdx - 1, cnt + 1);
	}
return; }

int main(int argc, char** argv) {
	std::cin >> str;
	solve(0, str.length() - 1, 0);
	if (answer <= 3) { std::cout << answer; }
	else { std::cout << -1; }
return 0; }