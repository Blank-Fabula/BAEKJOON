#include <iostream>
#include <string>
using namespace std;

int alpha[26];
int main(int argc, char** argv) {
	string str; cin >> str;
	for (char c : str) { alpha[c - 'a']++; }
	for (int i : alpha) { cout << i << ' '; }
return 0; }
