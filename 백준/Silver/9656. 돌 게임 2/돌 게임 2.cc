#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int N; cin >> N;
	if (N & 1) { cout << "CY";
	} else { cout << "SK"; }
return 0; }
