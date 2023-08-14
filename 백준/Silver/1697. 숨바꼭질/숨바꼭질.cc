#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    queue<pair<int, int>> q_;
    int N, K; cin >> N >> K;
    vector<bool> visited((N > K ? N : K) + 2 + 1);
    int result = 0;
    q_.push(make_pair(N, result));
    while (1) {
        int location = q_.front().first;
        result = q_.front().second;
        q_.pop();
        if (location == K) { break; }
        if (location + 1 <= K && !visited[location + 1]) { q_.push(make_pair(location + 1, result + 1));
            visited[location + 1] = true;
        }
        if (location - 1 >= 0 && !visited[location - 1]) { q_.push(make_pair(location - 1, result + 1));
            visited[location - 1] = true;
        }
        if (location * 2 <= K + 2 && !visited[location * 2]) { q_.push(make_pair(location * 2, result + 1));
            visited[location * 2] = true;
        }
    } cout << result;
return 0; }
