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
	unsigned long int cmp, power, res;

	res = 0;
	cmp = n ^ m;

	for (power = 1; (power << 1) <= cmp; power <<= 1)
		;

	while (power >= 1)
	{
		if ((cmp & power) != 0)
			res += 1;

		power >>= 1;
	}
	return (res);
}
