#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: given long int
 * Return: returns nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int power;

	for (power = 1; (power * 2) <= n; power *= 2)
		;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (power > 0)
	{
		if ((power & n) > 0)
			_putchar('1');
		else
			_putchar('0');
		power = power >> 1;
	}
}
