#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list_t list
 * @head: given list
 *
 * Return: returns nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
