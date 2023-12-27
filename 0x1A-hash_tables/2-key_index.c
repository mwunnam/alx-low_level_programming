#include "hash_tables.h"

/**
* key_index - Function gives index of a key
* @size: size of the hash table
* @key: the key we will be assiging index to
* Return: The index
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int long index = (hash_djb2(key)) % size;

	return (index);
}
