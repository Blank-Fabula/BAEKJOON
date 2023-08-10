#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int result = 1;
    int N, K; cin >> N >> K;
    for (int i = 1; i <= K; i++) {
        result *= N - i + 1;
        result /= i;
    } cout << result;
return 0; }
