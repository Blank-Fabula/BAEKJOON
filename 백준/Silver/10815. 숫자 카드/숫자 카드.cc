#include <iostream>
#include <unordered_map>

int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    std::unordered_map<int, int> m_Cards;
    int N; std::cin >> N;
    for (int i = 0; i < N; i++) {
        int card; std::cin >> card;
        m_Cards[card]++;
    }
    int M; std::cin >> M;
    for (int i = 0; i < M; i++) {
        int card; std::cin >> card;
        std::cout << m_Cards[card] << " ";
    }
return 0; }