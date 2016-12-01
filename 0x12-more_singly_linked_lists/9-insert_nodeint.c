#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: given list
 * @index: the index of the list where the new node
 * @n:
 * Return:
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node, *prev, *current;
	unsigned int i = 0;

	if (head == NULL)
		return;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	current = *head;

	while (i < index - 1)
	{
		current = current->next;
		++i;
	}

	prev = current;
	current = current->next;
	prev->next = new_node;
	new_node->next = current;
	prev = prev->next;

	return (prev);
}
