#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int answer = 0;
    std::vector<int> ropes;

    int N;
    std::cin >> N;
    ropes.resize(N);

    for (int &index : ropes)
    {
        std::cin >> index;
    }
    std::sort(ropes.begin(), ropes.end(), std::greater<int>());

    for (int idx = 0; idx < N; idx++)
    {
        if (ropes[idx] * (idx + 1) > answer)
        {
            answer = ropes[idx] * (idx + 1);
        }
    }

    std::cout << answer;

    return 0;
}