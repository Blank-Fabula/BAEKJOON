#include <bits/stdc++.h>

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);

  char direction[] = { 'N', 'E', 'S', 'W' };
  int cur = 0;

  short commandCnt = 10;
  while (commandCnt--)
  {
    short command;
    std::cin >> command;
    cur = (cur + command) % 4;
  }
  std::cout << direction[cur];

  return 0;
}