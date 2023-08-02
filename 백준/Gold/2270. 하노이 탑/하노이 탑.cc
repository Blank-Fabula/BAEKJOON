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
	int n; cin >> n; power(n);
	int p[3]; cin >> p[0] >> p[1] >> p[2];
	for (int i = 0; i < 3; i++) {
		while (p[i]--) {
			int plateValue; cin >> plateValue;
			pole[plateValue] = i + 1;
		}
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
