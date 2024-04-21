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
    long a, b, L;
    scanf("%ld %ld %ld", &a, &b, &L);

    long tmp = std::lcm(a, b);
    if (tmp == L) { printf("1"); }
    else if (L % tmp) { printf("-1"); }
    else { printf("%ld", find(tmp, L)); }

    return 0;
}