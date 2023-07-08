#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    stack<int> stack;
    int N; cin >> N;
    for (int size = 0; N!=0; N--) {
        string word; cin >> word;
        if (word == "push") {
            int num; cin >> num;
            stack.push(num);
        }
        else if (word == "pop") {
            if (stack.size()) {
                cout << stack.top() << "\n";
                stack.pop();
            }
            else cout << -1 << "\n";
        }
        else if (word == "size") {
            cout << stack.size() << "\n";
        }
        else if (word == "empty") {
            cout << stack.empty() << "\n";
        }
        else if (word == "top") {
            if (stack.size()) cout << stack.top() << "\n";
            else cout << -1 << "\n";
        }
    }
return 0; }

