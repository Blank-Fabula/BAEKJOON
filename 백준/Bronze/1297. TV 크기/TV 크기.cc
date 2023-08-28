#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	int D, WRatio, HRatio; cin >> D >> HRatio >> WRatio;
	long double DRatio = sqrt(HRatio * HRatio + WRatio * WRatio);
	cout << int(HRatio * D / DRatio) << ' ' << int(WRatio * D / DRatio);
return 0; }