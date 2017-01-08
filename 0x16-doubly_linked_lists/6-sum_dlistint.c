#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of the given linked list
 * @head: head of the given linked list
 * Return: returns the sum of all the data of the given linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int i, sum;

	sum = 0;
	for (i = 0; head != NULL; ++i)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
