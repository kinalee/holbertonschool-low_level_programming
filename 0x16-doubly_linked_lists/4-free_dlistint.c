#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees the given linked list
 * @head: given linked list
 * Return: returns nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
