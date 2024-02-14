/*making - Blank Fabula
title - Baekjoon Problem.17615
date - 2024.02.14*/

#include <iostream>
#include <algorithm>

int moveCount(const char& color, const std::string& string)
{
    std::string::size_type countPosition = string.find_first_not_of(color);

    if (countPosition == std::string::npos)
    {
        return 0;
    }
    return std::count(string.begin() + countPosition, string.end(), color);
}

int main(int argc, char *argv[])
{
    int answer;

    //unused variable
    int N; std::cin >> N;

    std::string string;
    std::cin >> string;

    std::string reverseString = std::string(string.rbegin(), string.rend());
    int redMove = moveCount('R', string), reverseRedMove = moveCount('R', reverseString);
    int blueMove = moveCount('B', string), reverseBlueMove = moveCount('B', reverseString);

    answer = std::min({ redMove, reverseRedMove, blueMove, reverseBlueMove });
    std::cout << answer;

    return 0;
}