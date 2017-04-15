#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

#include <stdio.h>

/* Linear search */
int linear_search(int *array, size_t size, int value);

/* Binary search */
int binary_search(int *array, size_t size, int value);

/* Binary search helper function */
int binary_helper(int *array, int min, int max, int value);

#endif
