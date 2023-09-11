#include <stdio.h>

int main(int argc, char* argv[]) {
    int num, i, value;
    
    scanf("%d", &num);
    
    value = 0;
    for (i = 1; i * i <= num; i++) { value++; }
    
    printf("%d", value);
    
    return 0;
}