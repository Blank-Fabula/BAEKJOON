#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char a[16], b[8], c[16], d[8];
    
    scanf("%s %s %s %s", a, b, c, d);
    
    strcat(a, b);
    strcat(c, d);
    
    printf("%lld", atoll(a) + atoll(c));
    
return 0; }