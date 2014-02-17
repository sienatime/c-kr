#include <stdio.h>

main(){
	long nc;
	nc = 0;
	/* Ctrl+D will end the program */
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}