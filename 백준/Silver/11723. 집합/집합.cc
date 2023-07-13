#include <iostream>
#include <string>
using namespace std;

int main(int avg, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int s = 0;
    int M;  cin >> M;
    while (M--) {
        string a = ""; cin >> a;
        if (a == "all") s = (1 << 21) - 1;
        else if (a == "empty") s = 0;
        else {
            int n; cin >> n;
            if (a == "add") s |= (1 << n);
            else if (a == "remove") s &= ~(1 << n);
            else if (a == "check") {
                if (s & (1 << n)) cout << 1 << '\n';
                else cout << 0 << '\n';
            }
            else if (a == "toggle") s ^= (1 << n);
        }
    }
return 0; }
