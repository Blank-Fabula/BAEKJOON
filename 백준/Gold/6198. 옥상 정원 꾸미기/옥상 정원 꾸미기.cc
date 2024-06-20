#include <bits/stdc++.h>

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);

  int n; std::cin >> n;

  long int h, ans = 0;;
  for (std::stack<int> s; n--; s.push(h))
  {
    std::cin >> h;
    while (!s.empty() && s.top() <= h) { s.pop(); }
    ans += s.size();
  }
  std::cout << ans;

  return 0;
}