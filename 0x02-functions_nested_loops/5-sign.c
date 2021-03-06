#include "holberton.h"

/**
 * print_sign - prints the +,-, or 0, depending on the given number
 * @n: given integer
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
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
