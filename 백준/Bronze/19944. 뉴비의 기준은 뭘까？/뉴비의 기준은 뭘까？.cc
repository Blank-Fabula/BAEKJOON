#include <iostream>

int main(int argc, char *argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
    
    int N, M; std::cin >> N >> M;
    
    if (M == 1 || M == 2) { std::cout << "NEWBIE!"; }
    else if (M <= N) { std::cout << "OLDBIE!"; }
    else { std::cout << "TLE!"; }
    
return 0; }