#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to a given long int
 * @index: given integer
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int power;

	if (index > (sizeof(*n) * 4))
		return (-1);

	power = 1;

	while (index > 0)
	{
		power *= 2;
		index -= 1;
	}

	*n += power;
	return (1);
}
