#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 *\a specific char
 * @size: size of the array
 * @c: content of the array
 *
 * Return: returns the address of the array
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *array;

	i = 0;

	if (size != 0)
	{
		array = malloc(size * sizeof(char));
	}
	else
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		++i;
	}

	return (array);

}
