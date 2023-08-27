#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
    int n; cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        arr[i] = make_pair(x, y);
    }
    for (int i = 0; i < n; i++) { int cnt = 1;
        for (int j = 0; j < n; j++) {
            if (j == i) { continue; }
            if (arr[i].first < arr[j].first && arr[i].second < arr[j].second) { cnt++; }
        } cout << cnt << '\n';
    }
return 0; }