#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of the given list
 * @head: given list
 * Return: returns the sum of all the data of the given list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
