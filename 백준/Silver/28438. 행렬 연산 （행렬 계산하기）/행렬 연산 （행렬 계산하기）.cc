#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M, Q; cin >> N >> M >> Q;
    vector<long long> rSum(N);
    vector<long long> cSum(M);
    while (Q--) {
        int num, rc, v;
        cin >> num >> rc >> v;
        if (num == 1) { rSum[rc - 1] += v;
        } else { cSum[rc - 1] += v; }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << rSum[i] + cSum[j] << ' ';
        } cout << '\n';
    }
return 0; }
