#include <stdio.h>

int main(void) { int testCase;
	scanf("%d", &testCase);
	while (testCase--) { int arrHotel[100][100] = { 0 };
		int height, width, num;
		scanf("%d %d %d", &height, &width, &num);
		int count = 0;
		for (int i = 1; i <= width; i++) {
			for (int j = 1; j <= height; j++) {
				count++;
				arrHotel[i][j] = count;
			}
		}
		for (int i = 1; i <= width; i++) {
			for (int j = 1; j <= height; j++) {
				if (arrHotel[i][j] == num) {
					printf("%d%02d\n", j, i);
				}
			}
		}
	}
return 0; }