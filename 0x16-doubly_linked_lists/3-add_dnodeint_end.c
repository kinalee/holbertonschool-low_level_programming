#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the given linked list
 * @head: given linked list
 * @n: element(integer) to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	else
	{
		cur = *head;
		while (cur->next != NULL)
			cur = cur->next;

		cur->next = new_node;
		new_node->prev = cur;
		cur = cur->next;
	}
	return (cur);
}
