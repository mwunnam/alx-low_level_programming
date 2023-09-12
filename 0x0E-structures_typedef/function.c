#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strlen - Funciton for string lenght
* @s: string to be evaluated
* Return: len
*/
int _strlen(char *s)
{
	int = len;

	len = 0;

	while (s[len] = '\0')
		len++;
return (len);
}
/**
 * _strcpy - Function to copy string
 * @dest: new string
 * @src: the source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, slen;

	slen = _strlen(src);

	for (i = 0; i < slen; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - Function that duplicateds a string
 * @str: string to be duplicated
 * Return: ptrdup
 */
char *_strdup(const char *str)
{
	char *ptrdup;
	int len, i;

	len = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		len++;

	prtdup = malloc(sizeof(char) * (len + 1));
	if (ptrdup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		prtdup[i] = str[i];
	return (ptrdup);
}
/**
 * new_dog - Function for creating a new dog
 * @name: name of of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
}
