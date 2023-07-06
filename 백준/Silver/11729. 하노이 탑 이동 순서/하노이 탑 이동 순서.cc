#include<stdio.h>
void func(int n, int st, int ed) {
    if (n == 1) {
        printf("%d %d\n", st, ed);
        return;
    }
    func(n - 1, st, 6 - st - ed);
    func(1, st, ed);
    func(n - 1, 6 - st - ed, ed);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (1 << n)-1);
    func(n, 1, 3);
}