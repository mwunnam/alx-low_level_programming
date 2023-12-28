#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that insert node at index
 * @h: The head of the list
 * @idx: The index for insertion
 * @n: The value to be inserted
 * Return: new_node
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current1, *current2, *new_node;
	unsigned int count;

	if (*h == NULL)
		return (NULL);
	count = 0;
	current1 = *h;
	while (current1 != NULL)
	{
		current1 = current1->next;
		count++;
	}
	if (count < idx)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current1 = *h;
	if (idx == 0)
		add_dnodeint(h, n);

	else if (idx == count)
		add_dnodeint_end(h, n);
	else
	{
		current2 = current1->next;
		for (count = 1; count < idx; count++)
		{
			current1 = current1->next;
			current2 = current2->next;
		}
		new_node->prev = current1;
		new_node->next = current2;
		current1->next = new_node;
		current2->prev = new_node;
	}
	return (new_node);
}
