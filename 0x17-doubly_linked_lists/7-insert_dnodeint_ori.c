#include "lists.h"
/**
 * count_len - Function the count the lent of a list
 * @h: The head of the list
 * Return: count
 **/
unsigned int count_len(dlistint_t **h)
{
	dlistint_t *current;
	unsigned int count;

	count = 0;

	current = *h;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
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
	count = count_len(h);
	if (count < idx)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current1 = *h;
	if (idx == 0)
	{
		add_dnodeint(h, n);
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else if (idx == count)
		add_dnodeint_end(h, n);
	else
	{
		current2 = current1->next;
		for (count = 1; count < idx; count++)
		{
			current1 = current1->next;
			current2 = current1->next;
		}
		new_node->prev = current1;
		new_node->next = current2;
		current1->next = new_node;
		current2->prev = new_node;
	}
	return (new_node);
}

