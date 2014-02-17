#include <stdio.h>

/* copy input to output */

main(){
	int c;
	char last_char;

	while ((c=getchar()) != EOF){
		if (c == ' ' && last_char == ' '){
			continue;
		}else{
			last_char = c;
			putchar(c);
		}
			

	}
}