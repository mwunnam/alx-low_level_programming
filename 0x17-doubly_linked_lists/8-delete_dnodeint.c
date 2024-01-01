#include "lists.h"
/**
 * dlen - Function count the nodes in the list
 * @head: Head to the list
 *
 * Return: lenght of the list
 **/
int dlen(dlistint_t **head)
{
	dlistint_t *current;
	unsigned int count;


	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	count = 0;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);

}

/**
 * delete_dnodeint_at_index - Function delete node at index
 * @head: Head to the list
 * @index: Index to be deleted
 *
 * Return: 1 when successful and -1 when not
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev_node, *next_node, *current;
	unsigned int len;

	if (head == NULL || *head == NULL)
		return (-1);
	len = dlen(head) - 1;
	if (index > len)
		return (-1);
	current = (*head);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(current);
	}
	if (index == len)
	{
		while (current != NULL)
			current = current->next;
		prev_node = current->prev;
		prev_node->next = NULL;
		free(current);
	}
	if (index >= 0 || index < len)
	{
		for (x = 0; x < index; x++)
		{
			prev_node = current;
			current = current->next;
		}
		next_node-prev = prev_node;
		prev_node->next = next_node;
		free(current);
	}

	return (1);
}
