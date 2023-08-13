#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, F; cin >> N >> F;
    N -= N % 100;
    int cnt = 0;
    while ((N + cnt) % F) { cnt++; }
    cout << setw(2) << setfill('0') << cnt;
return 0; }
