#include "holberton.h"
#include <math.h>

/**
 * _abs - computes absolute value of an integer
 * @n: given integer/tested integer
 *
 * Description: runs abs() function and returns value
 * Return: returns the result of abs(n)
 */

int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}

}
