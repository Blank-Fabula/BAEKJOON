#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int N, K; cin >> N >> K;
    int result = 1;
    for (int i = 1; i <= K; i++) {
        result *= N - i + 1;
        result /= i;
    } cout << result;
return 0; }
