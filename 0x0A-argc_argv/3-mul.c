#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * main - Entry point of the program
 *
 * @argc: number of argument passed
 * @argv: argument in string format
 *
 * Return: 0 ;
 */


int main(int argc, char *argv[])
{

	int numb1;
	int result;
	int numb2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);

	result = numb1 * numb2;
	printf("%d\n", result);
	return (0);
}
