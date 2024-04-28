#include <bits/stdc++.h>
typedef long double ld;

int main(int argc, char **argv)
{
    std::cin.tie(0)->sync_with_stdio(0);

    ld sum = 0.0;

    int N;
    std::cin >> N;

    std::vector<std::pair<ld, ld>> vec(N);
    std::cin >> vec[0].first >> vec[0].second;
    for (int i = 1; i < N; ++i)
    {
        std::cin >> vec[i].first >> vec[i].second;
        sum += vec[i - 1].first * vec[i].second;
        sum -= vec[i - 1].second * vec[i].first;
    }
    sum += vec[N - 1].first * vec[0].second;
    sum -= vec[N - 1].second * vec[0].first;
    sum = std::round(std::abs(sum) * 0.5 * 10) / 10.0;

    std::cout.precision(1);
    std::cout << std::fixed << sum;

    return 0;
}