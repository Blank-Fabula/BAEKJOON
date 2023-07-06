#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() { int num;
    cin >> num;
    pair<int, int> coord;
    vector<pair<int, int>> arrCoord;
    for (int i = 0; i < num; i++) {
        cin >> coord.first >> coord.second;
        arrCoord.push_back(coord);
    }
    sort(arrCoord.begin(), arrCoord.end());
    for (int i = 0; i < num; i++) {
        cout << arrCoord[i].first << ' ' << arrCoord[i].second << '\n';
    }
return 0; }
