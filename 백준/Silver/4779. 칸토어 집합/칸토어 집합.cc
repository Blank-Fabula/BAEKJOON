#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define MAX 12
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<string> v_str_Set(MAX + 1, "-");
	for (int i = 1; i <= MAX; ++i) {
		v_str_Set[i] = v_str_Set[i - 1] +
			string(v_str_Set[i - 1].length(), ' ') +
			v_str_Set[i - 1];
	}
	for (int n; cin >> n;) {
		cout << v_str_Set[n] << '\n';
	}
return 0; }
