#include<iostream>
#include<algorithm>
using namespace std;

int arr_Wine[10001];
int arr_dp[100001];
int main(int avg, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int N; cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> arr_Wine[i];
    }
    arr_dp[1] = arr_Wine[1];
    arr_dp[2] = arr_Wine[1] + arr_Wine[2];
    for (int i = 3; i <= N; i++) {
        arr_dp[i] = max(arr_dp[i - 1],
            max(arr_dp[i - 3] + arr_Wine[i - 1] + arr_Wine[i],
                arr_dp[i - 2] + arr_Wine[i]));
    }
    cout << arr_dp[N];
return 0; }
