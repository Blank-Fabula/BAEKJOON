#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string forward; cin >> forward;
	string reversed = forward;
	reverse(reversed.begin(), reversed.end());
	cout << (forward == reversed ? 1 : 0);
return 0; }
