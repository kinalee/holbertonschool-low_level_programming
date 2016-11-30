#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of the given list
 * @h: given list
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; h = h->next, ++i)
		printf("%d\n", h->n);

	return (i);
}
