#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer of the given list
 * @str: given string
 *
 * Return: returns the address of new element, or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	unsigned int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; ++i)
		;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
		current = current->next;
	}

	return (current);

}
