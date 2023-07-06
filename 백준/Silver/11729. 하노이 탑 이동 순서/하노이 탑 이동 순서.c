void hanoi(num, a,b,c) {
	if (num == 1) printf("%d %d\n", a, c);
	else {
		hanoi(num - 1, a, c, b);
		printf("%d %d\n", a, c);
		hanoi(num - 1, b, a, c);
	}
    return;
}
int main(num) {
	scanf("%d", &num);
	printf("%d\n", (1 << num) - 1);
	hanoi(num, 1, 2, 3);
	return 0;
}