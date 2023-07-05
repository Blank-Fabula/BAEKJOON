#include <iostream>
using namespace std;

int main() { int num;
	cin >> num;
	int nameNum = 665, cnt = 0;
	while (cnt != num) { int calc;
		nameNum++;
		calc = nameNum;
		while (calc != 0) {
			if (calc % 1000 == 666) {
				cnt++;
				break;
			}
			else calc /= 10;
		}
	}
	cout << nameNum;
return 0; }
