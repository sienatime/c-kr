#include <stdio.h>

main(){
	int c, whitespace;

	whitespace = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n' || c == '\t' || c == ' ')
			++whitespace;
	printf("%d\n", whitespace);
}