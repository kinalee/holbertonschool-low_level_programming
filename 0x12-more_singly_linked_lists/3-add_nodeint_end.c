#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the given list
 * @head: pointer to the pointer of a list
 * @n: given integer that should be instered into the new node
 * Return: the address of the new element, or NULL upon failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	current = current->next;

	return (current);

}
