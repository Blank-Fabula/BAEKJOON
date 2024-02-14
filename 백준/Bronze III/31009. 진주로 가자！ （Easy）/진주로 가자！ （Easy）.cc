/*making - Blank Fabula
title - Baekjoon Problem.31009
date - 2024.02.14*/

#include <iostream>
#include <array>
#include <string>

#define targetTerminal "jinju"

int main(int argc, char *argv[]) 
{
    std::pair<int, int> answer = { 0, 0 };

    int N;
    std::cin >> N;

    std::array<int, 1001> tolls = { 0 };
    std::pair<std::string, long long> terminal;
    while (N--)
    {
        std::cin >> terminal.first >> terminal.second;

        if (terminal.first == targetTerminal)
        {
            answer.first = terminal.second;
        }
        else if (terminal.second > 1000)
        {
            answer.second++;
        }
        else
        {
            tolls[terminal.second]++;
        }
    }

    for (int index = 2; index < tolls.size(); index++)
    {
        if (index > answer.first)
        {
            answer.second += tolls[index];
        }
    }

    std::cout << answer.first << '\n' << answer.second;

    return 0;
}