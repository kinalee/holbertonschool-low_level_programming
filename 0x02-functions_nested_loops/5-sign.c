#include "holberton.h"

/**
 * print_sign - print +,-, or = sign depending on the result of the
 *\given argument
 * @n: given integer/tested integer
 *
 * Description: prints signs before returns a value
 * Return: returns 1 for the positive numbers, 0 for zero, and -1 for negative
 * \numbers.
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}


}
