#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long N, R; cin >> N >> R;
    cout << 2 * R + N - 1;
return 0; }
