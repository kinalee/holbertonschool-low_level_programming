#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the given list
 * @head: pointer to the pointer to the given list
 * @n: given integer that should be inserted into the new node
 * Return: the address of the new element, or NULL upon failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
