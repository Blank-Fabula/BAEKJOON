#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
string word; cin >> word;
int size = word.size();
for (int i = 0; i <= size / 2; i++) {
if (word[i] != word[size - 1 - i]) { cout << 0; return 0; }
} cout << 1;
return 0; }
