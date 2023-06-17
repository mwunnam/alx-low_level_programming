/* 0-positive_or_negative */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Main = -Enry point
 *checks if a number is positive zero or negative
 *
 *Return: 0 on successful execution
 */

/*main function start the program */
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
