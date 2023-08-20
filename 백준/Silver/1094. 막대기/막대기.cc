#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int result = 0;
    for (; n > 0; n >>= 1) { if (n & 1) { result++; } }
    cout << result;
return 0; }