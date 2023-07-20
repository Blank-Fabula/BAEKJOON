#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    priority_queue<int, vector<int>, greater<int>> p_q_Num;
    int N; cin >> N;
    while (N--) {
        int num; cin >> num;
        if (num == 0) {
            if (p_q_Num.size()) {
                cout << p_q_Num.top() << '\n';
                p_q_Num.pop();
            } else { cout << p_q_Num.size() << '\n'; }
        } else { p_q_Num.push(num); }
    }
return 0; }
