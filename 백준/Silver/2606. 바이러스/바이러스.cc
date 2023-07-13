#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int numComputers;
    cin >> numComputers;

    vector<vector<int>> graph(numComputers + 1);
    int numConnections;
    cin >> numConnections;
    for (int i = 0; i < numConnections; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<bool> visited(numComputers + 1, false);
    dfs(1, graph, visited);

    int numInfected = 0;
    for (int i = 2; i <= numComputers; i++) {
        if (visited[i]) {
            numInfected++;
        }
    }

    cout << numInfected << "\n";

    return 0;
}
