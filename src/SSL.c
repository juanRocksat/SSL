
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "cadenas.h"


int main(void) {
	char s[4] = "lol_";
	puts(s);
	printf("length %d ",strlen(s));
	puts("");

	printf("la cadena es : %s", potenciar(s,3));
	puts("");

	puts("------fin----");
	exit(0);
	return EXIT_SUCCESS;
}
