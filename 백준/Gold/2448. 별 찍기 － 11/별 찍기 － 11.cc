#include <stdio.h>

char star[3072][6144];  // 출력할 별을 저장할 배열

void make_star(int n, int x, int y) {
    if (n == 3) {  // 재귀의 종료 조건
        star[y][x] = '*';
        star[y + 1][x - 1] = '*';
        star[y + 1][x + 1] = '*';
        star[y + 2][x - 2] = '*';
        star[y + 2][x - 1] = '*';
        star[y + 2][x] = '*';
        star[y + 2][x + 1] = '*';
        star[y + 2][x + 2] = '*';
        return;
    }

    make_star(n / 2, x, y);  // 위쪽 삼각형 그리기
    make_star(n / 2, x - n / 2, y + n / 2);  // 왼쪽 아래 삼각형 그리기
    make_star(n / 2, x + n / 2, y + n / 2);  // 오른쪽 아래 삼각형 그리기
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            star[i][j] = ' ';
        }
    }  // 배열 초기화

    make_star(n, n - 1, 0);  // 별 그리기

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            printf("%c", star[i][j]);
        }
        printf("\n");
    }  // 별 출력

    return 0;
}
