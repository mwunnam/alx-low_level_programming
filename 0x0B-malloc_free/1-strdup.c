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
	int lent;

	lent = _strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	pnewstr = malloc(lent + 1 * sizeof(char));
	if (pnewstr == NULL)
		return (NULL);

	for (i = 0; i < lent; i++)
	{
		pnewstr[i] = str[i];
	}
	pnewstr[lent] = '\0';
return (pnewstr);
}
