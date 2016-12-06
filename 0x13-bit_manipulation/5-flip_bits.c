#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *\to get from one number to another
 * @n: given long int 1
 * @m: given long int 2
 * Return: the number of bits should be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cmp, res;

	res = 0;
	cmp = n ^ m;

	while (cmp > 0)
	{
		if (cmp & 1)
			res += 1;

		cmp >>= 1;
	}
	return (res);
}
