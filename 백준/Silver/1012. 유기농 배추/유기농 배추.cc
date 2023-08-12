#include <iostream>
#include <vector>
using namespace std;

vector<vector<bool>> visited;

void dfs(int&, int&);
int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        int M, N, K; cin >> M >> N >> K;
        visited.resize(M, vector<bool>(N, false));
        while (K--) {
            int x, y; cin >> x >> y;
            visited[x][y] = true;
        }
        int cnt = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (visited[i][j]) { cnt++;
                    dfs(i, j);
                }
            }
        } visited.clear();
        cout << cnt << '\n';
    }
return 0; }

int xD[4] = { -1, 1, 0, 0 }, yD[4] = { 0, 0, -1, 1 };
void dfs(int& x, int& y) { visited[x][y] = false;
    for (int i = 0; i < 4; i++) {
        int nextX = x + xD[i], nextY = y + yD[i];
        if (nextX >= visited.size() || nextY >= visited[0].size()) { continue; }
        if (nextX < 0 || nextY < 0) { continue; }
        if (visited[nextX][nextY]) { dfs(nextX, nextY); }
    }
return; }
