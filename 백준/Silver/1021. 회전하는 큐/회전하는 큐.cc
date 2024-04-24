#include <bits/stdc++.h>

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);

  int N, M;
  std::cin >> N >> M;

  std::deque<int> dq(N);
  std::iota(dq.begin(), dq.end(), 1);

  int cnt = 0;

  for (int num; M--; --N)
  {
    std::cin >> num;

    auto it = std::find(dq.begin(), dq.end(), num);
    int distance = it - dq.begin(), distanceBack = N - distance;
    if (distance <= distanceBack)
    {
      for (int tmp; distance--; ++cnt)
      {
        tmp = dq.front();
        dq.pop_front();
        dq.push_back(tmp);
      }
    }
    else 
    {
      for (int tmp; distanceBack--; ++cnt)
      {
        tmp = dq.back();
        dq.pop_back();
        dq.push_front(tmp);
      }
    }
    dq.pop_front();
  }

  std::cout << cnt;
  
  return 0;
}