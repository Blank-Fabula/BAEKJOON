#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<string>v_Unheard, v_NotSeen;
    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        v_Unheard.push_back(s);
    }
    sort(v_Unheard.begin(), v_Unheard.end());
    for (int i = 0; i < M; i++) {
        string s; cin >> s;
        if (binary_search(v_Unheard.begin(), v_Unheard.end(), s)) {
            v_NotSeen.push_back(s);
        }
    }
    sort(v_NotSeen.begin(), v_NotSeen.end());
    cout << v_NotSeen.size() << '\n';
    for (auto result : v_NotSeen) {
        cout << result << '\n';
    }
return 0; }
