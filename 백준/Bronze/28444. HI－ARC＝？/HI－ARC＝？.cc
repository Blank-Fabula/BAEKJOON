#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int H, I; cin >> H >> I;
    int first = H * I;
    int A, R, C; cin >> A >> R >> C;
    int second = A * R * C;
    cout << first - second;
return 0; }
