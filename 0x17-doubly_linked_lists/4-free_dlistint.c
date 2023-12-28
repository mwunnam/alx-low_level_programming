#include "lists.h"

/**
 * free_dlistint - Function that free a list
 * @head: Head to the list
 * Return: void
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	if (head == NULL)
		return;

	current = head;

	while (current != NULL)
	{
		temp = current->next;

		free(current);
		current = temp;
	}
}
