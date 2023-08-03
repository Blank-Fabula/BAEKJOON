#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int bfs(vector<string>&, int&, int&);
int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M; cin >> N >> M;
    vector<string> maze(N);
    for (int i = 0; i < N; ++i) {
        cin >> maze[i];
    }
    int result = bfs(maze, N, M);
    cout << result;
return 0; }

const int yD[] = { 1, -1, 0, 0 };
const int xD[] = { 0, 0, -1, 1 };
struct Location { int y, x, dist; };
int bfs(vector<string>& maze, int& N, int& M) {
    vector<vector<bool>> visit(N, vector<bool>(M, false));
    queue<Location> q_;
    q_.push({ 0, 0, 1 });
    visit[0][0] = true;
    while (!q_.empty()) {
        Location current = q_.front();
        q_.pop();
        if (current.y == N - 1 && current.x == M - 1) { return current.dist; }
        for (int i = 0; i < 4; ++i) {
            int nextY = current.y + yD[i];
            int nextX = current.x + xD[i];
            if ((nextY >= 0 && nextY < N && nextX >= 0 && nextX < M)
                && maze[nextY][nextX] == '1' && !visit[nextY][nextX]) {
                visit[nextY][nextX] = true;
                q_.push({ nextY, nextX, current.dist + 1 });
            }
        }
    }
return -1; }
