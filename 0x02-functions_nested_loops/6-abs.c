#include "holberton.h"

/**
 * _abs - computes absolute value of an integer
 * @n: given integer
 * Return: returns the absolute value of the given integer
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n = n * (-1);
		return (n);
	}
}
