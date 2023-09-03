#include <iostream>
#include <cctype>

int main(int argc, char** argv) {
	char c; std::cin >> c; c = toupper(c);
	if (c == 'N') { std::cout << "Naver D2";
	} else { std::cout << "Naver Whale"; }
return 0; }