#include <iostream>
#include <string>
typedef long long ll;

int main(int argc, char** argv) {
    ll cnt = 0;
    std::string str; std::cin >> str;
    for (; str.size() > 1; cnt++) {
        ll sum = 0;
        for (char digit : str) { sum += digit - '0'; }
        str = std::to_string(sum);
    }
    std::cout << cnt << "\n";
    int num = std::stoll(str);
    if (num % 3 == 0) { std::cout << "YES"; }
    else { std::cout << "NO"; }
return 0; }