#include <bits/stdc++.h>

typedef long long ll;

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);

  for (ll ans = 0; ; ans = 0)
  {
    int n;
    std::cin >> n;
    if (!n) { break; }

    std::vector<ll> arr(++n + 1);
    for (int i = 1; i < n; ++i) { std::cin >> arr[i]; }

    std::stack<int> st;
    st.push(0);
    for (int i = 1; i <= n; ++i)
    {
      while (!st.empty() && arr[st.top()] > arr[i])
      {
        int tmp = st.top();
        st.pop();
        ans = std::max(ans, arr[tmp] * (i - st.top() - 1));
      }
      st.push(i);
    }

    std::cout << ans << '\n';
  }

  return 0;
}