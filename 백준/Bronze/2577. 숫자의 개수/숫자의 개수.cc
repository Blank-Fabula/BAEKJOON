#include <stdio.h>
int main(void) {
    int input, sum = 1;
    int num[10] = {0, };
    for (int i = 0; i < 3; i++) {
        scanf("%d", &input);
        sum *= input;
    }
    for (int i = 0; sum > 0; i++) {
        input = sum % 10;
        num[input] += 1;
        sum /= 10;
    }
    for (int i = 0; i < 10; i++) printf("%d\n", num[i]);
    return 0;
}