/*The last digit */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main = -Entry point for program
 *It takes last number and check it i s
 *greater than 5 equal to 0 or less than
 *
 *Return: 0 when successful
 *
 */

/* Main function starts the program Returs zeor */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* evaluate last digit */
	if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if ((n % 10) == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if ((n % 10) < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
