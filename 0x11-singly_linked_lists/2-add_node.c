#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer of a list
 * @str: given string
 *
 * Return: the address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int i;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; ++i)
		;

	temp->str = strdup(str);
	temp->len = i;
	temp->next = *head;
	*head = temp;

	return (temp);

}
