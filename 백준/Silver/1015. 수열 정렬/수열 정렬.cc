#include <iostream>
using namespace std;

int main() { int arrNum[50] ={ 0 };
	int repeat;
	cin >> repeat;
	for (int i = 0; i < repeat; i++) {
		cin >> arrNum[i];
	}
	int arrCount[50] = { 0 };
	for (int i = 0; i < repeat; i++) {
		for (int j = 0; j < repeat; j++) {
			if (arrNum[i] > arrNum[j]) arrCount[i]++;
		}
	}
	int cnt = 0;
	for (int i = repeat; i > 0; i--) {
		for (int j = 0; j < repeat - cnt; j++) {
			if (arrNum[i] == arrNum[j]) arrCount[i]++;
		} cnt++;
	}
	for (int i = 0; i < repeat; i++) {
		cout << arrCount[i] << " ";
	}
return 0; }