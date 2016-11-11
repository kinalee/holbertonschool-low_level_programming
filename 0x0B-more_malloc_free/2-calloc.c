#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of the datatype
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *call;
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	call = malloc(nmemb * size);

	if (call == NULL)
		return (NULL);

	array = call;

	for (i = 0; i < nmemb * size; ++i)
	{
		array[i] = 0;
	}

	return (call);
}
