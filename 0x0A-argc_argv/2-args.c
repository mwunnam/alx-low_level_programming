#include <stdio.h>
#include "main.h"


/**
 * main - Entry point of the program
 *
 * @argc: number of argument
 * @argv: print the arguement in strings
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
