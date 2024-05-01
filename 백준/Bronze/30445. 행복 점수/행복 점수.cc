#include <bits/stdc++.h>

int main(int argc, char **argv)
{
  std::cin.tie(0)->sync_with_stdio(0);
  std::cout.precision(2);
  std::cout << std::fixed;

  int arrH[26] = { 0 }, arrS[26] = { 0 };
  arrH[0] = 1, arrH[7] = 1, arrH[15] = 1, arrH[24] = 1;
  arrS[0] = 1, arrS[3] = 1, arrS[18] = 1;

  double happy = 0, sad = 0;

  std::string str;
  std::getline(std::cin, str);

  for (const char& c : str)
  {
    happy += arrH[c - 'A'];
    sad += arrS[c - 'A'];
  }
  
  if (!happy && !sad) { std::cout << 50.00; }
  else { std::cout << std::round((happy / (happy + sad)) * 10000.0) / 100.0; }

  return 0;
}