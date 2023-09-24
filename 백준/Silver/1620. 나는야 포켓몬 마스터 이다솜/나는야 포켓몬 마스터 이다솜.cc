#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cctype>
using namespace std;

int main(int avg, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int N, M; cin >> N >> M;
    map<string, int> m_;
    vector<string> v_s_Name(N + 1);
    for (int i = 1; i <= N; i++) {
        string s_; cin >> s_;
        v_s_Name[i] = s_;
        m_.insert(make_pair(s_, i));
    }
    while (M--) {
        string s_; cin >> s_;
        int num;
        if (isdigit(s_[0])) {
            num = stoi(s_);
            cout << v_s_Name[num] << '\n';
        } else {
            auto it = m_.find(s_);
            cout << it->second << '\n';
        }
    }
return 0; }
