#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the nth node of given linked list
 * @head: pointer of the given linked list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prv, *cur;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	cur = *head;
	for (i = 0; cur != NULL; ++i, cur = cur->next)
		;

	if (index >= i)
		return (-1);

	cur = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		for (i = 0; i < index; ++i)
		{
			prv = cur;
			cur = cur->next;
		}
		prv->next = cur->next;
		if (prv->next != NULL)
			cur->next->prev = prv;

		free(cur);
	}
	return (1);
}
