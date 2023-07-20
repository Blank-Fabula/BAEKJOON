#include <iostream>
#include <vector>
using namespace std;

int whiteCnt = 0, blueCnt = 0;
void cutPaper(vector<vector<bool>>&, int, int, int);
int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    vector<vector<bool>> v_Paper(N, vector<bool>(N, false));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int num; cin >> num;
            v_Paper[i][j] = num;
        }
    }
    cutPaper(v_Paper, N, 0, 0);
    cout << whiteCnt << endl;
    cout << blueCnt << endl;
return 0; }

void cutPaper(vector<vector<bool>>& papers, int size, int y, int x) {
    bool color = papers[y][x];
    for (int i = y; i < y + size; i++) {
        for (int j = x; j < x + size; j++) {
            if (papers[i][j] != color) {
                int newSize = size / 2;
                cutPaper(papers, newSize, y, x);
                cutPaper(papers, newSize, y + newSize, x);
                cutPaper(papers, newSize, y, x + newSize);
                cutPaper(papers, newSize, y + newSize, x + newSize);
                return;
            }
        }
    }
    if (color == false) { whiteCnt++;
    } else { blueCnt++; }
}
