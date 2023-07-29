#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    priority_queue<int, vector<int>, greater<int>> q_Num;
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        int num; cin >> num;
        q_Num.push(num);
    }
    for (int i = 0; i < n; i++) {
        cout << q_Num.top() << '\n';
        q_Num.pop();
    }
return 0; }
