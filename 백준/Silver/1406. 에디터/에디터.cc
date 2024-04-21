#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    std::deque<char> left;
    std::deque<char> right;

    for (char c; std::cin.get(c) && c != '\n'; left.push_back(c));

    int inputCase;
    std::cin >> inputCase;

    while (inputCase--)
    {
        char input;
        std::cin >> input;

        switch (input)
        {
        case 'L':
            if (!left.empty())
            {
                right.push_front(left.back());
                left.pop_back();
            }
            break;
        case 'D':
            if (!right.empty())
            {
                left.push_back(right.front());
                right.pop_front();
            }
            break;
        case 'B':
            if (!left.empty()) { left.pop_back(); }
            break;
        default:
            std::cin >> input;
            left.push_back(input);
            break;
        }
    }

    for (const char &c : left) { std::cout << c; }
    for (const char &c : right) { std::cout << c; }

	return 0;
}