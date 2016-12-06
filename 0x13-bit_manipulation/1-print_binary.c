#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: given long int
 * Return: returns nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int power;
	long long int p;

	for (power = 1; (power * 2) <= n; power *= 2)
		;

	p = power;

	while (p >= 1)
	{
		if ((p & n) != 0)
			_putchar('1');
		else
			_putchar('0');
		p = p >> 1;
	}
}
