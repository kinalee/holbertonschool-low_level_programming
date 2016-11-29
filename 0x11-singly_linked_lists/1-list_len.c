#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to a given linked list
 *
 * Return: the number of elments in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	int i;

	while (h != NULL)
	{
		++i;
		h = h->next;
	}
	return (i);
}
