#include <iostream>

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int testCase; std::cin >> testCase;
    for (int answer = 1; testCase--; answer = 1) {
        int N, M; std::cin >> N >> M;
        for (int i = M, div = 1; i > M - N; i--, div++) {
            answer = answer * i / div;
        }
        std::cout << answer << "\n";
    }
return 0; }