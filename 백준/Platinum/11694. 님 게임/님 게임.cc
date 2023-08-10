#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int result = 0, single = 0;
    int N; cin >> N;
    while (N--) {
        int amount; cin >> amount;
        result ^= amount;
        single |= amount != 1;
    } if (single) { result = !result; }
    cout << (result ? "cubelover" : "koosaga");
return 0; }
