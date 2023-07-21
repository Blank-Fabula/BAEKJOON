#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int N; cin >> N;
    vector<int> v_Num(N);
    for (int i = 0; i < N; i++) {
        cin >> v_Num[i];
    }
    vector<int> v_Copy = v_Num;
    sort(v_Copy.begin(), v_Copy.end());
    v_Copy.erase(unique(v_Copy.begin(), v_Copy.end()), v_Copy.end());
    for (int num : v_Num) {
        cout << lower_bound(v_Copy.begin(), v_Copy.end(), num) - v_Copy.begin() << ' ';
    }
return 0; }
