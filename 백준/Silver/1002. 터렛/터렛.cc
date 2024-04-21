#include <bits/stdc++.h>

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);

  int testCase;
  std::cin >> testCase;

  while (testCase--)
  {
    int x[2], y[2], r[2];
    for (int i = 0; i < 2; i++)
    {
      std::cin >> x[i] >> y[i] >> r[i];
    }

    double d = std::sqrt(std::pow(x[0] - x[1], 2) + std::pow(y[0] - y[1], 2));
    
    if (d == 0)
    {
      if (r[0] == r[1]) { std::cout << -1; }
      else { std::cout << 0; }
    }
    else
    {
      if (d > r[0] + r[1] || d < std::abs(r[0] - r[1])) { std::cout << 0; }
      else if (d == r[0] + r[1] || d == std::abs(r[0] - r[1])) { std::cout << 1; }
      else { std::cout << 2; }
    }

    std::cout << '\n';
  }
  
  return 0;
}