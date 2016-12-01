#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of the given list
 *\and returns the head node's data
 * @head: pointer to the pointer of the given list
 * Return: the deleted head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
