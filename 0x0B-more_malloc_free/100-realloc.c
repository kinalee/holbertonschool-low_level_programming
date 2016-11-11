#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: he new size, in bytes of the new memory block
 *
 * Return: pointer to the allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *realloc, *temp;
	unsigned int i;

	temp = ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	realloc = malloc(new_size * sizeof(void *));

	if (realloc == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < new_size - old_size; ++i)
			realloc[i] = temp[i];
	}
	else
	{
		for (i = 0; i < new_size; ++i)
		{
			realloc[i] = temp[i];
		}
	}

	free(ptr);
	return (realloc);

}
