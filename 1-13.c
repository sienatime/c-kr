#include <stdio.h>

main(){
	// start a count and increment it until you hit a whitespace
	// put that count in an array
	// then i guess after EOF print stars or something for each thing in the array

	int c, count, index, i, j;
	count = index = 0;
	int words[10];

	for (i = 0; i < 10; ++i)
		words[i] = 0;

	while ((c=getchar()) != EOF){
		if(c == ' ' || c == '\t' || c == '\n'){
			if(count){
				words[index] = count;
				++index;
			}
			count = 0;
		}
		else{
			++count;
		}
	}

	for (i=0;i<10;++i){
		for(j=0;j<words[i];++j){
			printf("*");
		}
		if(words[i])
			printf("\n");
	}
}  