#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    stack<int> a, b;
    int n; cin >> n;
    vector<int> N(n + 1);
    for (int i = 1; i <= n; ++i) {
        int num; cin >> num;
        a.push(num);
        N[num] = 1;
    }
    int moveCnt = 0;
    vector<pair<int, int>> moves;
    for (int i = n; i >= 1; --i) {
        if (N[i] == 1) {
            while (!a.empty() && a.top() != i) {
                b.push(a.top()); a.pop();
                N[b.top()] = 2;
                moves.push_back(make_pair(1, 2));
                ++moveCnt;
            }
            if (!a.empty() && a.top() == i) {
                a.pop();
                moves.push_back(make_pair(1, 3));
                ++moveCnt;
            }
        }
        else {
            while (!b.empty() && b.top() != i) {
                a.push(b.top()); b.pop();
                N[a.top()] = 1;
                moves.push_back(make_pair(2, 1));
                ++moveCnt;
            }
            if (!b.empty() && b.top() == i) {
                b.pop();
                moves.push_back(make_pair(2, 3));
                ++moveCnt;
            }
        }
    }
    cout << moveCnt << '\n';
    for (const auto& move : moves) {
        cout << move.first << ' ' << move.second << '\n';
    }
return 0; }
