#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    std::vector<ll> arr_A;
    int A; std::cin >> A;
    for (int i = 0; i < A; i++) {
        ll num; std::cin >> num;
        if (!arr_A.size() || arr_A.back() < num) { arr_A.push_back(num);
        } else { *std::lower_bound(arr_A.begin(), arr_A.end(), num) = num; }
    }
    std::cout << arr_A.size();
return 0; }