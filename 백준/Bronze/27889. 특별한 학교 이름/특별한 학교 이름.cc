#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    
    std::string str; std::cin >> str;
    
    if (str == "NLCS") { std::cout << "North London Collegiate School"; }
    else if (str == "BHA") { std::cout << "Branksome Hall Asia"; }
    else if (str == "KIS") { std::cout << "Korea International School"; }
    else if (str == "SJA") { std::cout << "St. Johnsbury Academy"; }
    
return 0; }