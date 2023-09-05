#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
* _strlen - function that get the leght of a string
*
* @str: String to be evaluated
*
* Return: leght of string
*
*/

int _strlen(char *str)
{
	int len;

	len = 0;

	while (*str != '\0')
	{
		len = len + 1;
		str = str + 1;
	}
return (len);
}
/**
* _strdup - Function that replicate a string
*
* @str: string to be evaluated
*
* Return: pointer to the duplicate
*/

char *_strdup(char *str)
{
	char *pnewstr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	pnewstr = malloc(_strlen(str + 1) * sizeof(char));

	if (pnewstr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		pnewstr[i] = str[i];
		i++;
	}
	pnewstr[i] = '\0';
return (pnewstr);
}
