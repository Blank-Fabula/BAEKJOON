#include <stdio.h>
#include <string.h>
int main(void) {
    char S[101];
    int num[27];
    scanf("%s", &S);
    for (int i = 'a'; i <= 'z'; num[i++ - 'a'] = -1);

    for (int i = 'a'; i <= 'z'; i++) {
        char* pch;
        pch = strchr(S, i);
        if (pch != NULL) num[i - 'a'] = pch - S;
    }
    for (int i = 'a'; i <= 'z'; printf("%d ", num[i++ - 'a']));
    return 0;
}