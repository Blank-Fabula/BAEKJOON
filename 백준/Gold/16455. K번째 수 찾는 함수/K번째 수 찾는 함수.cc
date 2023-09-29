#include <vector>
#include <algorithm>
#include <functional>

int kth(std::vector<int> &a, int k) {
    std::nth_element(a.begin(), a.end() - k, a.end(), std::greater<int>());
return a[a.size() - k]; }
