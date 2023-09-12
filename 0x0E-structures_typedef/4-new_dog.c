#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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

	ptrdup = malloc(sizeof(char) * (len + 1));
	if (ptrdup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		ptrdup[i] = str[i];

	return (ptrdup);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * new_dog - Function for creating a new dog
 * @name: name of of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: ptr_newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_newdog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	ptr_newdog = malloc(sizeof(dog_t));
	if (ptr_newdog == NULL)
		return (NULL);

	ptr_newdog->name = malloc(sizeof(char) * (len1 + 1));
	if (ptr_newdog->name == NULL)
	{
		free(ptr_newdog);
		return (NULL);
	}

	ptr_newdog->owner = malloc(sizeof(char) * (len2 + 1));
	if (ptr_newdog->owner == NULL)
	{
		free(ptr_newdog->name);
		free(ptr_newdog);
		return (NULL);
	}

	ptr_newdog->name = _strdup(name);
	ptr_newdog->owner = _strdup(owner);
	ptr_newdog->age = age;

	return (ptr_newdog);
}
