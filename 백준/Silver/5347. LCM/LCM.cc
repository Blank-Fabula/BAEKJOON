#include <stdio.h>
#include <numeric>

int main() { int N; scanf("%d", &N);
	for (long long A, B; N-- && scanf("%lld %lld", &A, &B); ) { printf("%lld\n", std::lcm(A, B)); }
}