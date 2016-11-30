#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in the given linked list
 * @h: given list
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; h = h->next, ++i)
		;

	return (i);
}
