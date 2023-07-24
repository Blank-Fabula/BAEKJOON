#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b; cin >> a >> b;
	cout << (int)(b * log10(a) + 1);
return 0; }
