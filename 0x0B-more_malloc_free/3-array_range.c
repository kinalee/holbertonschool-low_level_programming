#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc((max + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	i = 0;

	while (min <= max + 1)
	{
		array[i] = min;
		++i;
		++min;
	}

	return (array);

}
