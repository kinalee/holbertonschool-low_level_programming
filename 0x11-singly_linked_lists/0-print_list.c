#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list contains a pointer to a char variable and
 *\unsigned int variable 
 *
 * Retrun: number of nodes
 */

size_t print_list(const list_t *h)
{
        int i = 0;

        while (h != NULL)
        {
                printf("[%u] %s\n", h->len, h->str);
                h = h->next;
                ++i;
        }

        return (i);

}
