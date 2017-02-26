#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Singly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous elemnet of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* helper functions */
size_t size_of_list(listint_t *list);

/* printing functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* tasks */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
