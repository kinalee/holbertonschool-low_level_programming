#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees the given list
 * @head: given list
 * Return: returns nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = temp->next;
	}
}
