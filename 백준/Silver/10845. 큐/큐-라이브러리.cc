#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    queue<int> q;
    int N; cin >> N;
    while(N--) {
        string word; cin >> word;
        if (word == "push") {
            int num; cin >> num;
            q.push(num);
        }
        else if (word == "pop") {
            if (q.size()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else cout << -1 << "\n";
        }
        else if (word == "size") {
            cout << q.size() << "\n";
        }
        else if (word == "empty") {
            cout << q.empty() << "\n";
        }
        else if (word == "front") {
            if (q.size()) cout << q.front() << "\n";
            else cout << -1 << "\n";
        }
        else if (word == "back") {
            if (q.size()) cout << q.back() << "\n";
            else cout << -1 << "\n";
        }
    }
return 0; }
