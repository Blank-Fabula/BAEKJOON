#include <iostream>
using namespace std;

int arrNum[100000];
int main() { int K;
	cin >> K;
	int result = 0, cnt = 0;
	while(K--) { int num;
		cin >> num;
		if (num == 0) {
			cnt--;
			result -= arrNum[cnt];
		}
		else {
			arrNum[cnt] = num;
			result += arrNum[cnt];
			cnt++;
		}
	}
	cout << result;
return 0; }
