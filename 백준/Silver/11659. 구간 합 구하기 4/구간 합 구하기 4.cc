#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M; cin >> N >> M;
    vector<int> v_Num(N + 1);
    for (int i = 1; i <= N; i++) {
        int num; cin >> num;
        v_Num[i] += v_Num[i - 1] + num;
    }
    while (M--) {
        int i, j; cin >> i >> j;
        int result = v_Num[j] - v_Num[i - 1];
        cout << result << '\n';
    }
return 0; }
