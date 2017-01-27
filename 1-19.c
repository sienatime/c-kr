#import <stdio.h>
#import <string.h>
#define MAXLINE 1000

/* Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time. */


void myreverse(char s[]){
	int length = strlen(s);
	for (int i = 0; i < length/2; ++i)
	{
		char tmp = s[i];
		s[i] = s[length-i-1];
		s[length-i-1] = tmp;
	}
}

main(){
	// char st[] = "siena is programming in c";
	// myreverse(st);
	// printf("%s\n", st);
	char line[MAXLINE];
	int j, c;

	while ((c=getchar())!=EOF){
		line[j] = c;
		++j;
		if (c == '\n'){
			myreverse(line);
			printf("reversing: %s\n", line);
			j = 0;
		}
	}

}
