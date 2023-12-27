#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: Table to be deleted
 * Return: void
 **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node, *next_node;

	index = 0;
	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{
			next_node = current_node->next;
			free(current_node->value);
			free(current_node->key);
			free(current_node);
			current_node = next_node;
		}
	}
	free(ht->array);
	free(ht);
}

