#include <iostream>
using namespace std;

int main() { int A, B, V;
	cin >> A >> B >> V;
	int snail = (V - A) / (A - B) + 1;
	if ((V - A) % (A - B) != 0) snail++;
	cout << snail;
return 0; }
