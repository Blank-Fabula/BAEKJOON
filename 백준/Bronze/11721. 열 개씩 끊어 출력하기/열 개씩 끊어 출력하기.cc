#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string str; std::cin >> str;
    for (int i = 0; i < str.length(); i++) {
        std::cout << str[i];
        if ((i + 1) % 10 == 0) { std::cout << "\n"; }
    }
return 0; }