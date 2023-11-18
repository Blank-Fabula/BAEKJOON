#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char* argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);

    std::string numA; std::cin >> numA;
    std::reverse(numA.begin(), numA.end());
    std::string numB; std::cin >> numB;
    std::reverse(numB.begin(), numB.end());

    int sum = stoi(numA) + stoi(numB);
    std::string answer = std::to_string(sum);
    std::reverse(answer.begin(), answer.end());

    std::cout << stoi(answer);

return 0; }