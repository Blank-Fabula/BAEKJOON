#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cctype>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int N, M; cin >> N >> M;
    map<string, int> m_;
    vector<string> v_s_Name(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> v_s_Name[i];
        m_.insert(make_pair(v_s_Name[i], i));
    }
    while (M--) {
        string s_; cin >> s_;
        if (isdigit(s_[0])) {
            cout << v_s_Name[stoi(s_)] << '\n';
        } else {
            cout << m_[s_] << '\n';
        }
    }
return 0; }
