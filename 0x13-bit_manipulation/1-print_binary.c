#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: given long int
 * Return: returns nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int power;

	for (power = 1; (power << 1) <= n; power <<= 1)
		;

	while (power >= 1)
	{
		if ((power & n) != 0)
			_putchar('1');
		else
			_putchar('0');
		power >>= 1;
	}
}
