#include <iostream>
#include <string>

int solve(std::string& str) {
    int cntDKSH = 0;
    for (int i = 0; (i = str.find("DKSH", i)) != std::string::npos; i += 4) { cntDKSH++; }
return cntDKSH; }
int main(int argc, char** argv) {
    std::string str; std::cin >> str;
    std::cout << solve(str);
return 0; }