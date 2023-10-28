#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string scream; std::cin >> scream;
    std::string want; std::cin >> want;
    
    if (scream.length() >= want.length()) { std::cout << "go"; }
    else { std::cout << "no"; }
    
return 0; }