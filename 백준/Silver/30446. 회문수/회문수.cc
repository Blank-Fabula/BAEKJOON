//문제 해결법 찾은후 관련 풀이 참조
#include <bits/stdc++.h>
typedef unsigned long long int ull;

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);

  ull n;
  std::cin >> n;

  ull calc, cnt = 0;
  for (int i = 1; i < 100000; ++i)
  {
    calc = i;
    for (int j = i * 10; j /= 10;)
    {
      calc = (calc * 10) + (j % 10);
    }
    calc <= n ? ++cnt : cnt;

    calc = i;
    for (int j = i; j /= 10;)
    {
      calc = (calc * 10) + (j % 10);
    }
    calc <= n ? ++cnt : cnt;
  }

  std::cout << cnt;

  return 0;
}