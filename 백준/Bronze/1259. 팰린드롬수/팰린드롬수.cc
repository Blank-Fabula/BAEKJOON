#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main(int argc, char **argv) {
	while (true) {
		string N;  cin >> N;
		if (N == "0") break;
		string NCopy = N;
		reverse(N.begin(), N.end());
		if (N == NCopy) cout << "yes\n";
		else cout << "no\n";
	}
return 0; }
