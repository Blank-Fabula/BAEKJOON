#include <iostream>
using namespace std;

int gcd(int, int);
int lcm(int, int);
int main() {
	int A, B; cin >> A >> B;
	cout << gcd(A, B) << "\n" << lcm(A, B);
return 0; }

int gcd(int A, int B) {
	if (B == 0) return A;
	return gcd(B, A % B);
}
int lcm(int A, int B) {
	return A * B / gcd(A, B);
}
