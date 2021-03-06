#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: given list
 * @index: the index of the list where the new node
 * @n: integer to be inserted
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node, *prev, *cur;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (*head == NULL && index != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	cur = *head;

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (i < index)
		{
			if (cur->next == NULL && (index - i) > 1)
				return (NULL);

			prev = cur;
			cur = cur->next;
			++i;
		}

		prev->next = new_node;
		new_node->next = cur;
	}

	return (new_node);
}
