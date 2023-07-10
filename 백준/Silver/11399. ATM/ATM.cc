#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int N; cin >> N;
    vector<int> arrP(N);
    for (int i = 0; i < N; i++) {
        cin >> arrP[i];
    } sort(arrP.begin(), arrP.end());
    int result = 0;
    for (int cnt = 0, i = 0; i < N; i++) {
        cnt += arrP[i];
        result += cnt;
    }
    cout << result;
return 0; }
