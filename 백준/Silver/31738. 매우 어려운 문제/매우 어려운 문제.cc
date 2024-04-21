#include <bits/stdc++.h>

int main (int argc, char *argv[])
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    
    long long N, M;
    std::cin >> N >> M;

    long long result = 1;
    if (N >= M) { result = 0; }
    else
    {
        for (long long i = 2; i <= N; ++i)
        {
            result = (result * i) % M;
        }
    }

    std::cout << result << '\n';
    
    return 0;
}