#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Singly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* printing functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* bubble sort */
void bubble_sort(int *array, size_t size);
/* insertion sort  */
void insertion_sort_list(listint_t **list);

#endif