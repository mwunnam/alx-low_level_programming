#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *This function generates a random number.
 *Then it indicate wheather or not the number is
 *positive, Negative or Zero.
 */
int main(void)
{
	/* This will tell you if a random number is possitive negative or zero */
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
