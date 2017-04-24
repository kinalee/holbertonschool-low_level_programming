#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 *\using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: returns the index of the array where the value was found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int s;

	s = size;
	if (!array || size < 1)
		return (-1);
	else if (size == 0 && array[0] == value)
		return (0);
	return (binary_helper(array, 0, s - 1, value));
}

/**
 * binary_helper - helps binary_search function
 * @array: a pointer to the first element of the array to search in
 * @min: min index
 * @max: max index
 * @value: the value to search for
 * Return: returns the index of the array where the value was found
 */
int binary_helper(int *array, int min, int max, int value)
{
	int i, med;

	med = (min + max) / 2;
	if (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; ++i)
		{
			if (i < max)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[med] == value && array[med - 1] != value)
			return (med);
		else if (array[med] > value || array[med - 1] == value)
			return (binary_helper(array, min, med, value));
		else
			return (binary_helper(array, med + 1, max, value));

	}
	return (-1);
}
