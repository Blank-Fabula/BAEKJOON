#include <bits/stdc++.h>

std::vector<std::string> storage(3);

int bfs(int y, int x, int cnt)
{
  std::queue<std::pair<int, int>> q;
  if (storage[y][x] == 'O')
  {
    q.push({y, x});
    ++cnt;
    storage[y][x] = 'X';
  }

  while (!q.empty())
  {
    auto cur = q.front();
    q.pop();

    for (int i = 0; i < 4; ++i)
    {
      int curY = cur.first + "0112"[i] - '1';
      int curX = cur.second + "1021"[i] - '1';

      if (curY >= 0 && curY < 3 && curX >= 0 && curX < 3)
      {
        if (storage[curY][curX] == 'O')
        {
          q.push({curY, curX});
          ++cnt;
          storage[curY][curX] = 'X';
        }
      }
    }
  }

  return cnt;
}

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);

  int testCase;
  std::cin >> testCase;

  while (testCase--)
  {
    for (std::string &row : storage) { std::cin >> row; }

    std::vector<int> cnts;
    for (int i = 0; i < 3; ++i)
    {
      for (int j = 0; j < 3; ++j)
      {
        int cnt = bfs(i, j, 0);
        if (cnt) { cnts.push_back(cnt); }
      }
    }
    std::sort(cnts.begin(), cnts.end());

    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int &num : nums) { std::cin >> num; }
    
    bool check = true;
    if (cnts.size() != nums.size()) { check = false; }
    else
    {
      for (int i = cnts.size() - 1; i >= 0; --i)
      {
        if (nums[i] != cnts[i])
        {
          check = false;
          break;
        }
      }
    }
    std::cout << (check ? 1 : 0) << '\n';
  }

  return 0;
}