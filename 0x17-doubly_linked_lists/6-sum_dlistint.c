#include "lists.h"

/**
 * sum_dlistint - Function that sums all values in a list
 * @head: The head of the list
 * Return: Sum of the values
 *
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
		return (0);

	current = head;
	sum = 0;

	while (current->next != NULL)
	{
		sum = sum + (int)current->n;
		current = current->next;
	}

	return (sum + (int)current->n);
}
