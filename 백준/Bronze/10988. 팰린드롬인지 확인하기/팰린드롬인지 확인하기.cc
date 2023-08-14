#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string word; cin >> word;
	for (int i = 0; (i * 2) < word.size(); i++) {
		if (word[i] != word[word.size() - 1 - i]) { cout << 0; return 0; }
	} cout << 1;
return 0; }
