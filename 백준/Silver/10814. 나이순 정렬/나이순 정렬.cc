#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(int avg, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	multimap <int, string> mm_;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		string temp; cin >> temp;
		mm_.insert(make_pair(num, temp));
	}
	for (auto a = mm_.begin(); a != mm_.end(); a++) {
		cout << a->first << " " << a->second << '\n';
	}
return 0; }
