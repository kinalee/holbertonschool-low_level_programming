#include "holberton.h"

/**
 * print_times_table - prints multiple times table
 * @n: given integer/tested integer
 *
 * Return: no return
 */

void print_times_table(int n)
{

	int i = 0;

	if (n >= 0 && n <= 15)
	{

		while (i <= n)
		{
			num(i, n);
			++i;
		}
	}

}

/**
 * num - prints one row of times table
 * @r: row number of table
 * @n: total number of table
 *
 * Return: no return
 */

void num(int r, int n)
{

	int i, m;

	i = 1;
	_putchar('0');

	while (i <= n)
	{
		_putchar(',');

		m = r * i;

		if (m > 99)
		{
			_putchar(' ');
			_putchar(m / 100 + '0');
			_putchar((m / 10) % 10 + '0');
			_putchar(m % 10 + '0');
		}
		else if (m > 9)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(m + '0');
		}

		++i;

	}

	_putchar('\n');
}
