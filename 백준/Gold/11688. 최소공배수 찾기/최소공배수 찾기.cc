#include <bits/stdc++.h>

long find(const long& tmp, const long& L)
{
    for (long i = L / tmp; i <= L; i += L / tmp)
    {
        if (std::lcm(i, tmp) == L) { return i; }
    }
    return -1;
}

int main(int argc, char *argv[])
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    long a, b, L;
    std::cin >> a >> b >> L;

    long tmp = std::lcm(a, b);
    if (tmp == L) { std::cout << 1; }
    else if (L % tmp) { std::cout << -1; }
    else { std::cout << find(tmp, L); }

    return 0;
}