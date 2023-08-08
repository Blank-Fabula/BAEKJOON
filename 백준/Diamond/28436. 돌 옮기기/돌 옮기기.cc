#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool solve(string&);
int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        string board; cin >> board;
        reverse(board.begin(), board.end());
        cout << (solve(board) ? "WHITE" : "BLACK") << '\n';
    }
return 0; }

bool solve(string& board) {
    long move = 0, cnt = 0;
    char previous = '.';
    for (char current : board) {
        if (previous == '.') { previous = current; }
        if (previous == '.') { continue; }
        if (current == '.') { move += (previous == 'W' ? +1 : -1) * cnt;
        } else if (current == previous) { cnt++;
        } else { previous = '.'; cnt = 0; }
    }
return move > 0; }
