#include <iostream>
using namespace std;

#define N 31
int num = 1;
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int result = 0;
	int L; cin >> L;
	for (; L--; num *= N) {
		char c; cin >> c;
		result += (int)(c - 'a' + 1) * num;
	}
	cout << result;
return 0; }