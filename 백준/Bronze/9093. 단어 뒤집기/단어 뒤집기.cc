#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int TC; cin >> TC; cin.ignore();
	while (TC--) { int start = 0;
		string str; getline(cin, str); str += " ";
		for (int i = 0; (i = str.find(" ", i)) != string::npos; i++) {
			for (int j = i - 1; j >= start; j--) { cout << str[j]; }
			cout << " "; start = i + 1;
		} cout << '\n';
	}
return 0; }