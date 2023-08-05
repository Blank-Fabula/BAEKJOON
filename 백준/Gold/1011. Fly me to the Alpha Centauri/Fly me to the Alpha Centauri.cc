#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        long long x, y; cin >> x >> y;
        double calc = 2 * sqrt(y - x);
        int result = round(calc);
        if (calc <= result) { --result; }
        cout << result << '\n';
    }
return 0; }
