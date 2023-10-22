#include <iostream>
#include <vector>

int main(int argc, char** argv) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
    std::vector<std::vector<int>> arr;
    int n, m; std::cin >> n >> m;
    arr.resize(n + 1, std::vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cin >> arr[i][j];
            arr[i][j] += arr[i - 1][j];
            arr[i][j] += arr[i][j - 1];
            arr[i][j] -= arr[i - 1][j - 1];
        }
    }
    for (int k = 0; k < m; k++) {
        int x1, y1; std::cin >> x1 >> y1;
        int x2, y2; std::cin >> x2 >> y2;
        int answer = arr[x2][y2] - arr[x2][y1 - 1] - arr[x1 - 1][y2] + arr[x1 - 1][y1 - 1];
        std::cout << answer << "\n";
    }
return 0; }