#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	int N; cin >> N;
	if (N < 5) { cout << 4;
	} else { double NSqrt = sqrt(N);
		if (NSqrt == (int)NSqrt) { cout << 4 * (NSqrt - 1);
		} else { cout << 2 * (int)NSqrt + 2 * (round(NSqrt) - 1); }
	}
return 0; }