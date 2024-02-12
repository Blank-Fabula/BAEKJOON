/*making - Blank Fabula
title - Baekjoon Problem.1052
date - 2024.02.12*/

#include <iostream>
#include <bitset>

int main(int argc, char *argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int answer = 0;

    int N, K;
    std::cin >> N >> K;

    while (std::bitset<24>(N + answer).count() > K)
    {
        answer++;
    }

    std::cout << answer;

    return 0;
}