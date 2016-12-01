#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the given list
 * @head: given list
 * @index: index of the node, starting at 0
 * Return: returns the noth node, or NULL if fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;


	for (i = 0; temp != NULL; temp = temp->next, ++i)
		;

	if (index > i)
		return (NULL);

	temp = head;


	for (i = 0; i < index; temp = temp->next, ++i)
		;

	return (temp);
}
