#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double k; cin >> k;
    long long p = round(k * 1e9);
    long long q = 1e9;
    cout << "YES" << '\n';
    cout << p << " " << q;
return 0; }
