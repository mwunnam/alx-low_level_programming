#include "lists.h"
/**
 * count - Function the count the nodes in a list
 * @h: The head of the list
 * Return: count;
 **/
int count(dlistint_t **h)
{
	dlistint_t *current;
	int count;

	count = 0;
	current = *h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
/**
 * insert_dnodeint_at_index - Function that insert node at a possition
 * @h: The head of the list
 * @idx: The index for the insertion
 * @n: the data to be added to the new node;
 * Return: address to the new node;
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int len, i;

	if (h == NULL)
		return (NULL);

	len = count(h) - 1;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx > len)
	{
		free(new_node);
		return (NULL);
	}
	else if (idx == 0)
		new_node = add_dnodeint(h, n);
	else if (len == idx)
		new_node = add_dnodeint_end(h, n);
	else
	{
		current = *h;
		for (i = 0; i < idx && current != NULL; i++)
			current = current->next;
		if (current != NULL)
		{
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
		}
	}
	return (new_node);
}
