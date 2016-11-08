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
	char *c_ary;

	i = 0;
	c_ary = malloc(size);

	while (i < size)
	{
		c_ary[i] = c;
		++i;
	}

	return (c_ary);

}
