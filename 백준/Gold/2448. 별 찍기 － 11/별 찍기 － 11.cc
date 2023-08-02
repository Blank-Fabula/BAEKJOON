#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string blank = "   ";
	vector<string> star = {
		"  *  ",
		" * * ",
		"*****"
	};
	int N; cin >> N;
	star.resize(N);
	for (int i = 3; i < N; i *= 2) {
		for (int j = 0; j < i; ++j) {
			star[i + j] = star[j] + ' ' + star[j];
			star[j] = blank + star[j] + blank;
		}
		blank += blank;
	}
	for (int i = 0; i < N; ++i) {
		string result = star[i];
		cout << result << '\n';
	}
return 0; }
