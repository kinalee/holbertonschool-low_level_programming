#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a given list
 * @head: given list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	cur = *head;

	for (i = 0; cur != NULL; cur = cur->next, ++i)
		;

	if (index > i)
		return (-1);

	cur = *head;

	if (index != 0)
	{
		for (i = 0; i < index;
		     prev = cur, cur = cur->next, ++i)
			;

		prev->next = cur->next;
		free(cur);
	}
	else
	{
		*head = (*head)->next;
		free(cur);
	}
	return (1);
}
