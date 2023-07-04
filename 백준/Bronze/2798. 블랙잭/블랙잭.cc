#include <iostream>
using namespace std;

int arrNum[100];
int main() { int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> arrNum[i];
    }
    int sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				if (arrNum[i] + arrNum[j] + arrNum[k] <= M
					&& arrNum[i] + arrNum[j] + arrNum[k] > sum) {
					sum = arrNum[i] + arrNum[j] + arrNum[k];
                }
			}
		}
	}
	cout << sum << endl;
return 0; }