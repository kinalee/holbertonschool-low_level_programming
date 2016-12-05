#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a given char, contatins 0s or 1s.
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res, p2;
	int l;

	if (b == NULL)
		return (0);

	res = 0;

	for (l = 0; b[l] != '\0'; ++l)
		;

	--l;

	for (p2 = 1; l >= 0; l--, p2 *= 2)
	{
		if (b[l] == '0')
			;
		else if (b[l] == '1')
			res += p2;
		else
			return (0);
	}

	return (res);
}
