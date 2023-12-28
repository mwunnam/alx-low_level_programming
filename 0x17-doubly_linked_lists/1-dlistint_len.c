#include "lists.h"
/**
 * dlistint_len - Function the count the number of element
 * @h: The head to the double linked list
 * Return: The number of elements
 **/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	count = 0;

	if (h == NULL)
		return (0);

	current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
return (count);
}
