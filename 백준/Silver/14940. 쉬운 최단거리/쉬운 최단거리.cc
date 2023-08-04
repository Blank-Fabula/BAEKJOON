#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

vector<vector<int>> maze;
void bfs(int&, int&);
void out(int&, int&);
int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M; cin >> N >> M;
    maze.resize(N, vector<int>(M));
    bfs(N, M);
    out(N, M);
return 0; }

vector<vector<int>> visit;
const int yD[] = { 1, -1, 0, 0 };
const int xD[] = { 0, 0, -1, 1 };
struct Location { int yL, xL, dist; };
void bfs(int& N, int& M) {
    visit.resize(N, vector<int>(M, -1));
    queue<Location> q_;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> maze[i][j];
            if (maze[i][j] == 2) {
                q_.push({ i, j, 0 });
                visit[i][j] = 0;
            }
            else if (maze[i][j] == 0) {
                visit[i][j] = 0;
            }
        }
    }
    while (!q_.empty()) {
        Location current = q_.front(); q_.pop();
        for (int i = 0; i < 4; ++i) {
            int nextY = current.yL + yD[i];
            int nextX = current.xL + xD[i];
            if ((nextY >= 0 && nextY < N && nextX >= 0 && nextX < M)
                && maze[nextY][nextX] == 1 && visit[nextY][nextX] == -1) {
                visit[nextY][nextX] = current.dist + 1;
                q_.push({ nextY, nextX, current.dist + 1 });
            }
        }
    }
}

void out(int& N, int& M) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << visit[i][j] << ' ';
        } cout << '\n';
    }
}
