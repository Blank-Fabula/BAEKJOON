#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[]) {
	int a, b, c, d, i;
	char str[101];
	for (; gets(str); ) {
		a = 0, b = 0, c = 0, d = 0;
		for (i = 0; i < strlen(str); i++) {
			if (islower(str[i])) { a++; }
			else if (isupper(str[i])) { b++; }
			else if (isdigit(str[i])) { c++; }
			else if (str[i] == ' ') { d++; }
		} printf("%d %d %d %d\n", a, b, c, d);
	}
return 0; }