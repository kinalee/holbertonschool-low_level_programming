#include "stdlib.h"
#include "lists.h"

/**
 * free_listint2 - frees the given list
 * @head: pointer to a pointer of a list
 * Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
