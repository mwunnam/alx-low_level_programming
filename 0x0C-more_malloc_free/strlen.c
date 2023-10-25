#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
* _strlen - get the lenght of string
*
* @s: the sting to be evaluated
*
* Return: lenght of string
*/

int _strlen(char *s)
{
	int i;
	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
