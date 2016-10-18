#include "holberton.h"

/**
 * print_times_table - prints multiple times table
 * @n: given integer/tested integer
 *
 * Return: no return
 */

void print_times_table(int n)
{
	int i, j, a, b, c, d, e;

	i = 0;
	j = 1;
	if (n > 0 && n < 15)
	{
		while (i <= n)
		{
			e = n * 0;
			_putchar(e + '0');
			while (j <= n)
			{
				_putchar(',');
				_putchar(' ');
				a = j * i;
				b = a / 100;
				c = (a / 10) % 10;
				d = a % 10;
				if (a > 99)
				{
					_putchar(b + '0');
					_putchar(c + '0');
				}
				if (a > 9 && a < 100)
				{
					_putchar(' ');
					_putchar(c + '0');
				}
				if (a < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
					_putchar(d + '0');
				++j;
			}
			++i;
			j = 1;
			_putchar('\n');
		}
	}
}
