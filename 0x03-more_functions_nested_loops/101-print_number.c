#include "holberton.h"

/**
 * print_number - print given integer
 * @n: given integer
 * Description: Only use _putchar function to print
 * Return: returns nothing
 */
void print_number(int n)
{
	int len, div, res, tmp;

	if (n >= 0)
		n *= -1;
	else
		_putchar('-');

	len = 1;
	tmp = n;
	/* getting the length of n */
	while (tmp / 10 < 0)
	{
		tmp /= 10;
		++len;
	}

	div = 1;
	tmp = len;
	/* getting the divisor */
	while (tmp > 1)
	{
		div *= 10;
		--tmp;
	}

	while (len > 0)
	{
		res = ((n / div) % 10) * -1;
		_putchar(res + '0');
		--len;
		div /= 10;
	}
}
