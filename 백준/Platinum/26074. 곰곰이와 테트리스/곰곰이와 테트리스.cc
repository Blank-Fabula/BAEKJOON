#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M; cin >> N >> M;
    if (N * M == 2) { cout << "ChongChong" << '\n';
    } else { cout << "GomGom" << '\n'; }
return 0; }
