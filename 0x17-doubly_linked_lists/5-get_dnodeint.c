#include "lists.h"

/**
 * get_dnodeint_at_index - Function that prints value at nth node
 * @head: Head of the list
 * @index: Index at which value will be return
 * Return: value at nth node
 *
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	count = 0;
	current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if  (current == NULL)
		return (NULL);


	return (current);
}
