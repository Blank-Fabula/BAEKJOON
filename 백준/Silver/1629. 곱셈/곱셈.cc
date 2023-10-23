#include <iostream>

typedef long long ll;

ll power(ll& A, ll B, ll& C) {
    if (B == 1) { return A % C; }
    ll calc = power(A, B / 2, C);
    calc = calc * calc % C;
    if (B % 2 == 0) { return calc; }
    else { return calc * A % C; }
return 0; }

int main(int argc, char** argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

    ll A, B, C; std::cin >> A >> B >> C;

    std::cout << power(A, B, C);

return 0; }