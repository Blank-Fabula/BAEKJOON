#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int cntMax; cin >> cntMax;
    int cntChain; cin >> cntChain;
    vector<vector<int>> vtrChain(cntMax + 1);
    for (int i = 0; i < cntChain; i++) {
        int A, B; cin >> A >> B;
        vtrChain[A].push_back(B);
        vtrChain[B].push_back(A);
    }
    vector<bool> vtrVirus(cntMax + 1, false);
    queue<int> q;
    q.push(1);
    vtrVirus[1] = true;
    int cntVirus = 0;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cntVirus++;
        for (int neighbor : vtrChain[node]) {
            if (!vtrVirus[neighbor]) {
                q.push(neighbor);
                vtrVirus[neighbor] = true;
            }
        }
    }
    cout << cntVirus - 1;
return 0; }
