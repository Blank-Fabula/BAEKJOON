#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M, K; cin >> N >> M >> K;
    vector<string> str(N);
    for (int i = 0; i < N; i++) {
        cin >> str[i];
        sort(str[i].begin(), str[i].end());
    } sort(str.begin(), str.end());
    string result;
    for (int i = 0; i < K; i++) { result += str[i]; }
    sort(result.begin(), result.end());
    cout << result;
return 0; }
