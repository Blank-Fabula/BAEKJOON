#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	int N; cin >> N;
	vector<pair<int, int>> p_(N);
	for (int i = 0; i < N; i++) { cin >> p_[i].second >> p_[i].first; }
	sort(p_.begin(), p_.end());
	for (int i = 0; i < N; i++) { cout << p_[i].second << ' ' << p_[i].first << '\n'; }
return 0; }