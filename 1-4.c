#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /*lower limit of temperature scale*/
	upper = 100; /* upper limit */
	step = 5; /* step size */
 
	celsius = lower;

	printf("C     F\n");

	while (celsius <= upper){
		fahr = celsius/(5.0/9.0) + 32;
		printf("%3.0f %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}