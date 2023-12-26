#include "hash_tables.h"

/**
* hash_djb2 - Function that implemets djb2 algorithm
* @str: string that is used to generate has value
* Return: hash value generated
**/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash + c);
	}
	return (hash);
}
