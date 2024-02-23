/*making - Blank Fabula
title - Baekjoon Problem.1759
date - 2024.02.24*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct PasswordInfo
{
    //variable//
    std::string answer;

    std::vector<char> alphabets;
    std::vector<int> permutation;

    //function//
    bool is_vowel(const char& alphabet)
    {
        return std::find("aeiou", "aeiou" + 5, alphabet) != "aeiou" + 5;
    }
} password;

int main(int argc, char *argv[])
{
    int lineCount, alphabetCount;
    std::cin >> lineCount >> alphabetCount;

    password.permutation.resize(alphabetCount);
    std::fill(password.permutation.begin(), password.permutation.begin() + lineCount, -1);

    password.alphabets.resize(alphabetCount);
    for (char& alphabet : password.alphabets)
    {
        std::cin >> alphabet;
    }
    std::sort(password.alphabets.begin(), password.alphabets.end());
    
    do
    {
        password.answer = "";
        int vowelCount = 0, consonantCount = 0;

        for (int index = 0; index < alphabetCount; index++)
        {
            if (password.answer.size() != lineCount && password.permutation[index] == -1)
            {
                password.answer += password.alphabets[index];
                (password.is_vowel(password.alphabets[index])) ? vowelCount++ : consonantCount++;
            }
        }
        
        if (vowelCount >= 1 && consonantCount >= 2)
        {
            std::cout << password.answer << '\n';
        }
    } while (next_permutation(password.permutation.begin(), password.permutation.end()));

    return 0;
}