#include <bits/stdc++.h>

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);
  
  int result = 0, one = 0;
  
  int N;
  std::cin >> N;
  
  while (N--)
  {
    int num;
    std::cin >> num;

    result ^= num;
    one |= num != 1;
  }
  one ? result = !result : result;
  
  std::cout << (result ? "cubelover" : "koosaga");
  
  return 0;
}