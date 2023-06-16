#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* This function generates a random number
 * Thne it indicate wheather or not the number is 
 * Positive, Negative or Zero
 **/
int main(void)
{
	/* code goes in here */
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
