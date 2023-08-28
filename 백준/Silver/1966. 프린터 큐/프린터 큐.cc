#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	int TC; cin >> TC;
	while (TC--) {
		int N, M; cin >> N >> M;
		vector<pair<bool, int>> p_(N);
		for (int i = 0; i < N; i++) {
			int rank; cin >> rank;
			if (i == M) { p_[i] = { true, rank };
			} else { p_[i] = { false, rank }; }
		}
		int cnt = 0;
        while (!p_.empty()) { bool print = true;
            for (int i = 1; i < p_.size(); i++) {
                if (p_[0].second < p_[i].second) { print = false; break; }
            }
            if (print) { cnt++;
                if (p_[0].first) { break; }
                p_.erase(p_.begin());
            } else { p_.push_back(p_[0]); p_.erase(p_.begin()); }
        } cout << cnt << '\n';
	}
return 0; }