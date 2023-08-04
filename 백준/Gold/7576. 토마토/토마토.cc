#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void bfs(int&, int&);
void out(int&, int&);
int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int M, N; cin >> M >> N;
    bfs(N, M);
    out(N, M);
return 0; }

vector<vector<int>> box;
int yD[] = { -1, 1, 0, 0 };
int xD[] = { 0, 0, 1, -1 };
struct Location { int y, x, day; };
void bfs(int& N, int& M) {
    box.resize(N, vector<int>(M, 0));
    queue<Location> q_;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int tomato; cin >> tomato;
            box[i][j] = tomato;
            if (tomato == 1) { q_.push({ i, j, 1 }); }
        }
    }
    while (!q_.empty()) {
        Location current = q_.front(); q_.pop();
        for (int i = 0; i < 4; ++i) {
            int nextY = current.y + yD[i];
            int nextX = current.x + xD[i];
            if ((nextY >= 0 && nextY < N && nextX >= 0 && nextX < M)
                && box[nextY][nextX] == 0) { box[nextY][nextX] = current.day + 1;
                q_.push({ nextY, nextX, box[nextY][nextX] });
            }
        }
    }
}

void out(int& N, int& M) { int result = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (box[i][j] == 0) { cout << -1; return; }
            result = max(result, box[i][j] - 1);
        }
    } cout << result;
}
