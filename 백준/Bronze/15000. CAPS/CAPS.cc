#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char** argv) {
	string str; cin >> str;
	for (char& c : str) { c = toupper(c); }
	cout << str;
return 0; }