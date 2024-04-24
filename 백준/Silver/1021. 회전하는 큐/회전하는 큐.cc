#include <bits/stdc++.h>

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);

  int N, M;
  std::cin >> N >> M;

  std::vector<int> vec(N);
  std::iota(vec.begin(), vec.end(), 1);

  int cnt = 0;

  for (int num; M--; --N)
  {
    std::cin >> num;

    auto it = std::find(vec.begin(), vec.end(), num);
    int dis = it - vec.begin(), disBack = vec.end() - it;
    if (dis <= disBack)
    {
      cnt += dis;
      std::rotate(vec.begin(), vec.begin() + dis, vec.end());
    }
    else 
    {
      cnt += disBack;
      std::rotate(vec.begin(), vec.end() - disBack, vec.end());
    }

    vec.erase(vec.begin());
  }

  std::cout << cnt;
  
  return 0;
}