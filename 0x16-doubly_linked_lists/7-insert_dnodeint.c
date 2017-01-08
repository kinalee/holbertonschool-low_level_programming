#include "lists.h"

/**
 * insert_dnodeint_at_idx - inserts a new node at the given position
 * @head: pointer to the given linked list
 * @idx: index
 * @n: element(integer) to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *cur, *new_node;
	unsigned int i;

	if ((head == NULL) || (*head == NULL && idx > 0))
		return (NULL);

	cur = *head;
	for (i = 0; cur != NULL; ++i, cur = cur->next)
		;

	if (idx > i)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		new_node->prev = NULL;
		(*head)->prev = new_node;
		*head = new_node;
		return (*head);
	}
	else
	{
		cur = *head;
		for (i = 0; i < idx - 1; ++i)
			cur = cur->next;

		new_node->next = cur->next;
		cur->next = new_node;
		new_node->prev = cur;
		cur = new_node;
	}
	return (cur);
}
