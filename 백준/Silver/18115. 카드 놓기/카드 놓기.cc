#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    std::cin.tie(0)->sync_with_stdio(0);

    int N;
    std::cin >> N;

    int x1 = 0, x2 = 1, x3 = N - 1;
    std::vector<int> cards(N);

    do
    {
        int x;
        std::cin >> x;

        if (x == 1) { cards[x1] = N, x1 = x2++; }
        else if (x == 2) { cards[x2++] = N; }
        else { cards[x3--] = N; }
    } while (--N);

    for (const auto& card : cards)
    {
        std::cout << card << ' ';
    }

    return 0;
}