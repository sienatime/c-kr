#include <stdio.h>

is_whitespace(c){
	if (c == ' ' || c == '\t' || c == '\n')
		return 1;
	return 0;
}

main(){
	int c;
	char last_char;

	while ((c=getchar()) != EOF){
		if (is_whitespace(c) && !is_whitespace(last_char))
			printf("\n");
		else if(!is_whitespace(c))
			putchar(c);

		last_char = c;
	}
}