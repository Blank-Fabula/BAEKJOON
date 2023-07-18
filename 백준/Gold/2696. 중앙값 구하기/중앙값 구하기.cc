#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int T; cin >> T;
	while (T--) {
		int M; cin >> M;
		vector<int> v_arr_N(M);
		for (int i = 0; i < M; i++) {
			cin >> v_arr_N[i];
		}
		if (M & 1) M++;
		int repeat = M / 2;
		cout << repeat-- << '\n';
		int cnt = 1;
		int order = 1;
		vector<int> v_arr_NCopy(order);
		v_arr_NCopy[0] = v_arr_N[0];
		cout << v_arr_NCopy[0] << " ";
		while (repeat--) {
			cnt++;
			order += 2;
			v_arr_NCopy.resize(order);
			v_arr_NCopy[order - 2] = v_arr_N[order - 2];
			v_arr_NCopy[order - 1] = v_arr_N[order - 1];
			sort(v_arr_NCopy.begin(), v_arr_NCopy.end());
			int result = v_arr_NCopy[order / 2];
			cout << result;
			if (cnt == 10) { cnt = 0;
				cout << '\n';
			} else { cout << " "; }
		}
		cout << '\n';
	}
return 0; }
