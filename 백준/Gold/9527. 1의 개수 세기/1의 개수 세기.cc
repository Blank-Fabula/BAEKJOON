#include <bits/stdc++.h>
using ll = long long;

ll f(ll a)
{
  ll res = 0;
  for (ll i = 1; i <= a; i <<= 1)
  {
    ll tmp = i << 1;
    res += (a / tmp) * i + std::max(0LL, a % tmp - i + 1);
  }
  return res;
}

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);

  ll a, b;
  std::cin >> a >> b;

  std::cout << f(b) - f(a - 1);

  return 0;
}
