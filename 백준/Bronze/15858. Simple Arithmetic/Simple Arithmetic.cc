#include <stdio.h>

int main(int argc, char *argv[]) {
	double A, B, C; scanf("%lf %lf %lf", &A, &B, &C);
	double result = A * B / C;
	printf("%.18lf", result);
return 0; }