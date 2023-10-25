#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *
 *
 *
 */
int main(int argc, char argv[])
{
	if (argc !=4)
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);
	char *operator = atoi(argv[2]);
	int num2 = atoi(argv[3]);
	int (*func)(int, int);
	func = get_op_func(operator);

	if (func == NULL) {
		printf("Error\n");
		return (99); // Exit with status 99 for invalid operator
	}

	int result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
