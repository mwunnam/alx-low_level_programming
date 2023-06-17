/**
*0-positive_or_negative
*
*This program randomly generate numbers and 
*determine wheather they are positive zero or negative 
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*Main
*
*The main is the entry point of the program,
*It generates random numbers and determine if they are 
*positive, zero or negative
*Returns 0 on successful execution
*/

int main(void)
{
	int n;
	/* Generating the random number */
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* Determine if the number is positive zero or negative  */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
