#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(int, vector<int>&);
int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int N; cin >> N;
    vector<int> v_arr_N(N);
    for (int i = 0; i < N; ++i) {
        cin >> v_arr_N[i];
    } sort(v_arr_N.begin(), v_arr_N.end());
    int M; cin >> M;
    while (M--) {
        int num; cin >> num;
        cout << check(num, v_arr_N) << '\n';
    }
return 0; }

bool check(int N, vector<int>& v_arr_N) {
return binary_search(v_arr_N.begin(), v_arr_N.end(), N); }
