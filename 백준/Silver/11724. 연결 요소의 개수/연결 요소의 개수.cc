#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v_Graph;
vector<bool> visit;
int dfs(int, int);
int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M; cin >> N >> M;
    v_Graph.resize(N + 1);
    visit.resize(N + 1);
    while(M--) {
        int u, v; cin >> u >> v;
        v_Graph[u].push_back(v);
        v_Graph[v].push_back(u);
    }
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (!visit[i]) { cnt = dfs(cnt, i); }
    }
    cout << cnt;
return 0; }

int dfs(int cnt, int num) {
    visit[num] = true;
    for (size_t i = 0; i < v_Graph[num].size(); i++) {
        int next = v_Graph[num][i];
        if (!visit[next]) { dfs(cnt, next); }
    } cnt++;
return cnt; }
