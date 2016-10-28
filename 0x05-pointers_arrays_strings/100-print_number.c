#include "holberton.h"

/**
 * getexp - get the exponents - number of zeros, indeed.
 * @n: given integer
 *
 * Return: exponents
 */

int getexp(int n)
{

	int exp = 1;

	while (n / 10 != 0)
	{
		exp *= 10;
		n = n / 10;
	}
	return (exp);
}

/**
 * print_number - prints an integer
 * @n: given integer
 *
 * Return: returns nothing
 */

void print_number(int n)
{
	int exp;

	exp = getexp(n);

	if (n < 0)
	{
		_putchar('-');
	}
	if (n > 0)
	{
		n = n * -1;
	}
	while (exp > 0)
	{
		_putchar(-((n / exp) % 10) + '0');
		exp = exp / 10;
	}
}
