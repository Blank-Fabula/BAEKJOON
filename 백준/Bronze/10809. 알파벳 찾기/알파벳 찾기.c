#include <stdio.h>

int main(int argc, char* argv[]) {
    char A[101];
    scanf("%s", A);

    for (int Ac = 97; Ac <= 122; Ac++) {
        int Acc = 0;
        for (; A[Acc] != 0; Acc++) {
            if (A[Acc] == (char)Ac) { break; }
        }
        if (A[Acc] == (char)Ac) { printf("%d ", Acc); }
        else { printf("-1 "); }
    }
return 0; }