#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value at the key
 * @ht: The hash table to be searched
 * @key: The key for searching
 * Return: value if successful and Null if not
 **/


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	index = 0;
	current_node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;

	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);

		current_node = current_node->next;
	}

	return (NULL);


}
