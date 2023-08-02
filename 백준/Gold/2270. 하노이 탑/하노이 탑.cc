#include <iostream>
using namespace std;

#define DIVISOR 1000000

int power2[100001];
int pole[100001];

void power(int&);
int hanoi(int, int);
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
    power(n);
	int a, b, c; cin >> a >> b >> c;
	int plateValue;
	while (a--) { cin >> plateValue;
		pole[plateValue] = 1;
	}
	while (b--) { cin >> plateValue;
		pole[plateValue] = 2;
	}
	while (c--) { cin >> plateValue;
		pole[plateValue] = 3;
	}
	int result = hanoi(n, pole[n]);
	cout << pole[n] << '\n' << result;
return 0; }

void power(int& n) { power2[0] = 1;
	for (int i = 1; i <= n; i++) {
		power2[i] = 2 * power2[i - 1] % DIVISOR;
	}
}

int moveCnt = 0;
int hanoi(int plate, int nextPole) {
	if (plate == 0) { return moveCnt; }
	int currentPlate = pole[plate];
	int restPole = 6 - currentPlate - nextPole;
	if (currentPlate == nextPole) { hanoi(--plate, nextPole);
	} else { moveCnt = (moveCnt + power2[plate - 1]) % DIVISOR;
		hanoi(--plate, restPole);
	}
return moveCnt; }
