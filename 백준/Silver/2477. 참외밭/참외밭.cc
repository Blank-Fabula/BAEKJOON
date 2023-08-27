#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    pair<int, int> p_[12];
    int K; cin >> K;
    int bigX = 0, bigY = 0;
    for (int i = 0; i < 6; i++) {
        int way, num; cin >> way >> num;
        p_[i] = { way, num };
        p_[i + 6] = { way, num };
        if (way - 3 < 0) { num > bigX ? bigX = num : NULL;
        } else { num > bigY ? bigY = num : NULL; }
    } int bigSquare = bigX * bigY;
    int smallSquare;
    for (int i = 0; i < 6; i++) {
        if (p_[i].first == p_[i + 2].first) {
            if(p_[i + 1].first == p_[i + 3].first) {
                smallSquare = p_[i + 1].second * p_[i + 2].second;
            }
        }
    }
    int result = K * (bigSquare - smallSquare);
    cout << result;
return 0; }