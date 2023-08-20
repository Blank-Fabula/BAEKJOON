#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

struct Student { double x, y; };

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    Student std;
    vector<unordered_set<double>> quadrants(4);
    for (int i = 0; i < N; i++) {
        cin >> std.x >> std.y;
        if (std.x >= 0 && std.y > 0) { quadrants[0].insert(std.x / std.y);
        } else if (std.x < 0 && std.y >= 0) { quadrants[1].insert(std.y /std.x);
        } else if (std.x <= 0 && std.y < 0) { quadrants[2].insert(std.x / std.y);
        } else { quadrants[3].insert(std.y / std.x); }
    }
    int result = 0;
    for (int i = 0; i < 4; i++) { result += quadrants[i].size(); }
    cout << result;
return 0; }