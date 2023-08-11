#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int result = 0;
    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++) { int A; cin >> A;
        result += A;
    }
    for (int i = 0; i < M; i++) { int B; cin >> B;
        result -= B;
    }
    cout << result;
return 0; }
