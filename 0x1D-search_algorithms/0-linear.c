#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *\using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: returns the index of the array where the value was found
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);
	while (size > 0)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		++i; --size;
	}
	return (-1);
}
