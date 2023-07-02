#include <iostream>
using namespace std;

int main(void){

    int S = 0, n1 = 0, n2 = 0, n3=0;

    scanf("%d", &S);

    n1 = S;
    n3 = S;
    for (S = S; S > 0; S--) {
        n2 = n3;
        for (n2 = n2; n2 <= n1; n2++) {
            printf("*"); 
        }
        n1++;
        printf("\n");

    }
    return 0;
}//메인함수 끝