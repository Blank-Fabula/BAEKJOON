#include <bits/stdc++.h>

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);
  
  int dna[26] = { 0 };

  unsigned int S, P;
  std::cin >> S >> P;

  std::string str;
  std::cin >> str;

  int a, c, g, t;
  std::cin >> a >> c >> g >> t;

  int end = S - P, cnt = 0;
  int left = 0, right = P;

  for (int i = 0; i < right; ++i) { ++dna[str[i] - 'A']; }
  while (left <= end)
  {
    (dna[0] >= a && dna[2] >= c && dna[6] >= g
      && dna[19] >= t) ? cnt++ : cnt;

    int erase = str[left] - 'A';
    dna[erase] ? --dna[erase] : dna[erase];

    ++dna[str[left++ + P] - 'A'];
  }
  std::cout << cnt;

  return 0;
}