#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given integer
 * @index: given index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = n >> index;

	if ((b & 1) == 1)
		return (1);
	if ((b & 0) == 0)
		return (0);
	else
		return (-1);
}
