#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int N;
    std::cin >> N;

    std::deque<std::pair<int, int>> dq(N);
    for (int i = 0; i < N; i++)
    {
        dq[i].first = i + 1;
        std::cin >> dq[i].second;
    }

    while (N--)
    {
        std::cout << dq.front().first << ' ';
        int cur = dq.front().second;
        dq.pop_front();

        int move = std::abs(cur);
        if (cur > 0)
        {
            while (--move)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else 
        {
            while (move--)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}