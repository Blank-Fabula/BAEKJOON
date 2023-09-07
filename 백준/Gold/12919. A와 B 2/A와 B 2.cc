#include <iostream>
#include <string>
#include <algorithm>

std::string S;
bool result = false;

void solve(std::string T) {
	if (T == S) { result = true; }
	if (T.size() == S.size()) { return; }
	std::string nextT;
	if (T.back() == 'A') {
		nextT = T; nextT.pop_back();
		solve(nextT);
	}
	if (T.front() == 'B') {
		nextT = T; nextT.erase(nextT.begin());
		reverse(nextT.begin(), nextT.end());
		solve(nextT);
	}
}
int main(int argc, char** argv) {
	std::cin >> S;
	std::string T; std::cin >> T;
	solve(T);
	std::cout << result;
return 0; }