#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, K, I; cin >> N >> K >> I;
    int cnt = 0;
    while (K != I) { ++cnt;
        K = (K + 1) / 2;
        I = (I + 1) / 2;
    } cout << cnt;
return 0; }
