#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int A, B; cin >> A >> B;
	int C = A ^ B; cout << C;
return 0; }
