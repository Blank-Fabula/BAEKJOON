#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N = 1;
    int X; cin >> X;
    for (; X > N; N++) { X -= N; }
    if (N % 2 == 0) { cout << X << "/" << N - X + 1 << '\n';
    } else { cout << N - X + 1 << "/" << X << '\n'; }
return 0; }
