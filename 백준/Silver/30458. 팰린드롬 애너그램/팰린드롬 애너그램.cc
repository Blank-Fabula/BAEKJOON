/*making - Blank Fabula
title - Baekjoon Problem.30458
date - 2024.02.12*/

#include <iostream>
#include <string>
#include <unordered_set>

int main(int argc, char *argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int stringLength;
    std::cin >> stringLength;
    
    std::string string;
    std::cin >> string;

    if (stringLength % 2)
    {
        string.erase(stringLength / 2, 1);
    }

    std::unordered_set<char> alphabets;
    for (const char& index : string)
    {
        if (alphabets.find(index) != alphabets.end())
        {
            alphabets.erase(index);
        }
        else
        {
            alphabets.insert(index);
        }
    }

    std::cout << (alphabets.empty() ? "Yes" : "No");

    return 0;
}