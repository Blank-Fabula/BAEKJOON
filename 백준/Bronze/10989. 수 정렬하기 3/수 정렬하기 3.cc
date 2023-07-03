#include <iostream>
using namespace std;

int arrCount[10001];
int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int repeat, num;
	cin >> repeat;
	for (int i = 0; i < repeat; i++) {
		cin >> num;
		arrCount[num]++;
	}
	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < arrCount[i]; j++) {
			cout << i << "\n";
		}
	}
return 0; }