#include <bits/stdc++.h>

#define WIDTH 3

int main(int argc, char *argv[])
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int N;
    std::cin >> N;

    std::vector<int> dpMax(WIDTH);
    for (int &index : dpMax) { std::cin >> index; }
    std::vector<int> dpMin = dpMax;

    for (int i = 1; i < N; ++i)
    {
        std::vector<int> nums(WIDTH);
        for (int &index : nums) { std::cin >> index; }

        int tmp0 = dpMin[0], tmp2 = dpMin[2];
        dpMin[0] = std::min(dpMin[0], dpMin[1]) + nums[0];
        dpMin[2] = std::min(dpMin[1], dpMin[2]) + nums[2];
        dpMin[1] = std::min({tmp0, dpMin[1], tmp2}) + nums[1];

        tmp0 = dpMax[0], tmp2 = dpMax[2];
        dpMax[0] = std::max(dpMax[0], dpMax[1]) + nums[0];
        dpMax[2] = std::max(dpMax[1], dpMax[2]) + nums[2];
        dpMax[1] = std::max({tmp0, dpMax[1], tmp2}) + nums[1];
    }

    std::cout << std::max({dpMax[0], dpMax[1], dpMax[2]}) << ' ';
    std::cout << std::min({dpMin[0], dpMin[1], dpMin[2]}) << '\n';

    return 0;
}
