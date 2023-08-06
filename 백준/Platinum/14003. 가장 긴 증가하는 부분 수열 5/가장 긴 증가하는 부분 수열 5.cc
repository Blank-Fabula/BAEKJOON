#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    vector<int> arr_A(N), check(N), v;
    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        cin >> arr_A[i];
        int value = lower_bound(v.begin(), v.end(), arr_A[i]) - v.begin();
        check[i] = value;
        if (value == v.size()) { ++cnt;
            v.push_back(arr_A[i]);
        } else { v[value] = arr_A[i]; }
    } cout << cnt << '\n';
    vector<int> result;
    for (int i = N - 1; i >= 0 && cnt != 0; --i) {
        if (check[i] == cnt - 1) { --cnt;
            result.push_back(arr_A[i]);
        }
    }
    for (int i = result.size() - 1; i >= 0; --i) {
        cout << result[i] << ' ';
    }
return 0; }
