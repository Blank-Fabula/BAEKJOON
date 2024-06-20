#include <bits/stdc++.h>

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);

  std::string str; std::cin >> str;

  int ans = 0; char prev = '(';
  std::stack<char> s;

  for (auto &curr : str)
  {
    if (curr == ')')
    {
      if (prev == ')') { ans++; }
      else { ans += s.size() - 1; }
      s.pop();
    }
    else { s.push(curr); }
    prev = curr;
  }

  std::cout << ans;

  return 0;
}