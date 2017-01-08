#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of the given linked list
 * @head: head of given linked list
 * @index: index
 * Return: the nth node, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; tmp != NULL; ++i, tmp = tmp->next)
		;

	if (index >= i)
		return (NULL);

	for (i = 0; i < index; ++i)
		head = head->next;

	return (head);
}
