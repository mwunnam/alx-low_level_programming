#include "hash_tables.h"

/**
 * hash_table_print - Function that prints content of hash table
 * @ht: The hash table to be printed
 * Return: void
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_node;
	int flag;

	flag = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node != NULL)
		{
			if (!flag)
				printf(", ");
			else
				flag = 0;

			printf("'%s':'%s'", current_node->key, current_node->value);
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
