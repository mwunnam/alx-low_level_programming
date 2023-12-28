#include "lists.h"
/**
 * print_dlistint - Function that print the element of doublylinked list
 * @h: Head of the doublylinked list
 * Return: element
 **/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	if (h == NULL)
		return (0);

	current = h;
	count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
return (count);
}
