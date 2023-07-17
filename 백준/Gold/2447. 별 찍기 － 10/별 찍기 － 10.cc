#include<stdio.h>

void star_Box(int y, int x, int Num);

int main(void) {

	int Num;
	scanf("%d", &Num);

	for (int i = 0; i < Num; i++) {
		for (int j = 0; j < Num; j++) {
			star_Box(i, j, Num);
		}
		printf("\n");
	}

	return 0;
}

void star_Box(int y, int x, int Num) {

	if ((y/Num % 3 == 1) && (x/Num % 3 == 1)) {
		printf(" ");
	}
	else {
		if (Num / 3 == 0) {
			printf("*");
		}
		else {
			star_Box(y, x, Num / 3);
		}
	}

	return;
}