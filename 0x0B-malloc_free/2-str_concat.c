#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat - Entry point
*
* @s1: first string
* @s2: second string
*
* Return: 0 (success)
*/

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, i;
	char *ptrStrn;

	len1 = 0;
	len2 = 0;
	i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	ptrStrn = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptrStrn == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		ptrStrn[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		ptrStrn[len1 + i] = s2[i];
	}
	ptrStrn[len1 + len2] = '\0';
return (ptrStrn);
}
