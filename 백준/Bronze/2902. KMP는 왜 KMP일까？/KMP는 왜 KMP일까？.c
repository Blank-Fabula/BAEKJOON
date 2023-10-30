#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int i, strLen;
    char str[100];
    scanf("%s", str);
    
    strLen = strlen(str);
    for (i = 0; i < strLen; i++) {
        if (isupper(str[i])) { printf("%c", str[i]); }
    }
    
return 0; }