#include <iostream>

int main(int argc, char **argv){
    int N, S;
    while (std::cin >> N >> S) {
        std::cout << S / (N + 1) << "\n";
    }
return 0; }